#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    CtoT["LED"]=0;
    CtoT["RFID_ETC"]=1;
    CtoT["RFID_PARK"]=2;
    CtoT["RFID_TRAFFIC"]=3;
    CtoT["CAMERA"]=4;
    CtoT["IR_1"]=11;
    CtoT["IR_2"]=12;
    CtoT["IR_3"]=13;
    CtoT["IR_4"]=14;
    CtoT["IR_5"]=15;
    CtoT["IR_6"]=16;


    initDtoIP();


    //Connect,主要是菜单
    connect(ui->actionOpen_Camera,SIGNAL(triggered()),this,SLOT(openCamera()));
    connect(ui->actionControl,SIGNAL(triggered()),this,SLOT(openCarControl()));
    connect(ui->actionAbout,SIGNAL(triggered()),this,SLOT(openAbout()));
    connect(ui->actionCharge,SIGNAL(triggered()),this,SLOT(openCharge()));
    //初始化
    initRGB();
    //初始化
    QPixmap pixmap("C:/Users/59236/Documents/ManagerGUI/background.png");
    ui->label_background->setPixmap(pixmap);
    ui->label_background->show();
    //初始化socket
    mSocket=new QUdpSocket();
    mRecvSocket=new QUdpSocket();

    //初始化外部类对组件的调用
    initOtherClassComponent();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//传递指针
void MainWindow::initOtherClassComponent(){
    //threadrfid.h
    //rfidthread=new ThreadRFID();
    //rfidthread->info=ui->textEdit_info;
    //rfidthread->rfidinfo=ui->textEdit_RFIDInfo;
}

void MainWindow::getip(){
    curIP = ui->lineEdit_inputIP->text();
    //QString 转 int
    curPort = ui->lineEdit_port->text().toInt();
    //info
    ui->textEdit_info->setText(curIP+","+QString::number(curPort,10));
}

void MainWindow::sendRGB(){
    int R= ui->horizontalSlider_R->value();
    int G= ui->horizontalSlider_G->value();
    int B= ui->horizontalSlider_B->value();

    //设置格式
    QString sendInfo;

    //发送
    sender(curIP,curPort,"LED",QString::number(R)+","+QString::number(G)+","+QString::number(B),1);

}

//初始化RGB条
void MainWindow::initRGB(){
    //设置最大值最小值
    ui->horizontalSlider_R->setMinimum(0);
    ui->horizontalSlider_G->setMinimum(0);
    ui->horizontalSlider_B->setMinimum(0);
    ui->horizontalSlider_R->setMaximum(100);
    ui->horizontalSlider_G->setMaximum(100);
    ui->horizontalSlider_B->setMaximum(100);
}

//发送器
void MainWindow::sender(QString IP,int port,QString Type,QString info,int command){
    //获取当前时间
    QDateTime current_date_time =QDateTime::currentDateTime();
    QString current_date =current_date_time.toString("yyyy-MM-dd-hh-mm-ss");

    QString sendinfo=getHostIpAddress()+" "+Type+" "+current_date+" "+info+" "+QString::number(command,10);
    ui->textEdit_info->setText("send "+sendinfo);
    qint64 len=mSocket->writeDatagram(sendinfo.toUtf8(),QHostAddress(IP),port);

}

//获取本机IP地址
QString MainWindow::getHostIpAddress(){
    QString strIpAddress;
    QList<QHostAddress> ipAddressesList = QNetworkInterface::allAddresses();
    // 获取第一个本主机的IPv4地址
    int nListSize = ipAddressesList.size();
    for (int i = 0; i < nListSize; ++i)
    {
        if (ipAddressesList.at(i) != QHostAddress::LocalHost &&
                ipAddressesList.at(i).toIPv4Address()) {
            strIpAddress = ipAddressesList.at(i).toString();
            break;
        }
    }
    // 如果没有找到，则以本地IP地址为IP
    if (strIpAddress.isEmpty())
        strIpAddress = QHostAddress(QHostAddress::LocalHost).toString();
    return strIpAddress;
}

//udp recv
void MainWindow::initRecvSocket(QString selfIP,int Port){
    mRecvSocket->bind(QHostAddress(selfIP),Port);
    //信号触发
    connect(mRecvSocket,SIGNAL(readyRead()),this,SLOT(recvInfo()));
}

//获取udp信息
void MainWindow::recvInfo(){
    while (mRecvSocket->hasPendingDatagrams())
    {
        QByteArray datagram;
        datagram.resize(mRecvSocket->pendingDatagramSize());
        mRecvSocket->readDatagram(datagram.data(), datagram.size());
        //QByteArray转QString
        QString info(datagram);
        ui->textEdit_info->setText(info);

        //分割字符串
        QStringList Msg= info.split(" ");
        //处理文件信息
        processmsg(Msg);
    }

}

//处理内容
void MainWindow::processmsg(QStringList msg){
    QString srcIP=msg.at(0);
    QString type=msg.at(1);
    QString curTime=msg.at(2);
    QString info=msg.at(3);
    int cType=msg.at(4).toInt();

    switch (CtoT[type]) {
    case 0:

        break;
    case 1:
        setStatusImg(ui->label_ETCimg,RFID_ON);
        //记录ETC
        ui->textEdit_RFIDInfo->setText("UID:"+info);
        msecSleep(100);
        setStatusImg(ui->label_ETCimg,RFID_OFF);
        break;
    case 2:
        setStatusImg(ui->label_Parkimg,RFID_ON);
        //停车记录触发后的操作

        msecSleep(100);
        setStatusImg(ui->label_Parkimg,RFID_OFF);
        break;
    case 3:
        setStatusImg(ui->label_Trafficimg,RFID_ON);
        //交通灯触发后的操作

        msecSleep(100);
        setStatusImg(ui->label_Trafficimg,RFID_OFF);
        break;
    case 11:
        setStatusImg(ui->label_IR_1,IR_ON);
        //红外触发后的操作

        msecSleep(100);
        setStatusImg(ui->label_IR_1,IR_OFF);
        break;
    default:
        break;

    }
}

//延时函数
void MainWindow::msecSleep(int msec){
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() <dieTime )
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}


//显示图片
void MainWindow::setStatusImg(QLabel* label,int type){
    if(type==0){
        QPixmap pixmap("C:/Users/59236/Documents/ManagerGUI/shadow.png");
        label->setPixmap(pixmap);
        label->show();
    }else if(type==1){
        QPixmap pixmap("C:/Users/59236/Documents/ManagerGUI/null.png");
        label->setPixmap(pixmap);
        label->show();
    }else if(type==2){
        QPixmap pixmap("C:/Users/59236/Documents/ManagerGUI/IR.png");
        label->setPixmap(pixmap);
        label->show();
    }else if(type==3){
        QPixmap pixmap("C:/Users/59236/Documents/ManagerGUI/IR_null.png");
        label->setPixmap(pixmap);
        label->show();
    }
}

//开启RFID
void MainWindow::startRFID(){
    //rfidthread=new ThreadRFID();
    //rfidthread->start();
    ui->label_RFIDstatus->setText("starting");

    //初始化图片
    QPixmap pixmap("C:/Users/59236/Documents/ManagerGUI/shadow.png");
    ui->label_ETCimg->setPixmap(pixmap);
    ui->label_ETCimg->show();
}

//Menu: Open Camera
void MainWindow::openCamera(){
    CameraView *newdialog=new CameraView();
    newdialog->setWindowTitle("Camera");
    newdialog->show();
}

//Menu: Car Control
void MainWindow::openCarControl(){
    CarControl *newdialog=new CarControl();
    newdialog->setWindowTitle("CarControl");
    newdialog->show();
}

//Menu: About
void MainWindow::openAbout(){
    About *newdialog=new About();
    newdialog->setWindowTitle("About");
    newdialog->show();
}

//Menu: Charge
void MainWindow::openCharge(){
    Charge *newdialog=new Charge();
    newdialog->setWindowTitle("Charge");
    newdialog->show();
}

//获取本机ip
void MainWindow::startRecv(){
    //ui->label_selfIP->setText(getHostIpAddress());
    //获取监听地址
    //selfIP=getHostIpAddress();
    ui->label_selfIP->setText("192.168.191.1");
    selfIP="192.168.191.1";
    //selfIP="127.0.0.1";
    selfPort=ui->lineEdit_recvport->text().toInt();
    initRecvSocket("192.168.191.1",selfPort);
}

//IP设备初始化
void MainWindow::initDtoIP(){
    DtoIP[0]="192.168.191.2";
    DtoIP[1]="IP Address Here";
    DtoIP[2]="IP Address Here";
    DtoIP[3]="IP Address Here";
    DtoIP[4]="IP Address Here";
}

//选择设备ip
void MainWindow::selectDeviceIP(){
    if(ui->radioButton_rasp1->isChecked()==true)
        ui->lineEdit_inputIP->setText(DtoIP[0]);
    else if(ui->radioButton_rasp2->isChecked()==true)
        ui->lineEdit_inputIP->setText(DtoIP[1]);
    else if(ui->radioButton_rasp3->isChecked()==true)
        ui->lineEdit_inputIP->setText(DtoIP[2]);
    else if(ui->radioButton_car1->isChecked()==true)
        ui->lineEdit_inputIP->setText(DtoIP[3]);
    else if(ui->radioButton_car2->isChecked()==true)
        ui->lineEdit_inputIP->setText(DtoIP[4]);
}


