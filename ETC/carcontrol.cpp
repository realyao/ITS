#include "carcontrol.h"
#include "ui_carcontrol.h"

CarControl::CarControl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CarControl)
{
    ui->setupUi(this);
    //初始化设备IP
    initDeviceIP();
    //事件响应
    connectEvent();
    //初始化红绿灯
    initTrafficLight();
}

CarControl::~CarControl()
{
    delete ui;
}

//按钮响应事件统一函数
void CarControl::connectEvent(){
    connect(ui->radioButton_Car1,SIGNAL(clicked()),this,SLOT(selectDeviceIP()));
    connect(ui->radioButton_Car2,SIGNAL(clicked()),this,SLOT(selectDeviceIP()));
    connect(ui->pushButton_Up,SIGNAL(clicked()),this,SLOT(moveUP()));
    connect(ui->pushButton_Down,SIGNAL(clicked()),this,SLOT(moveDOWN()));
    connect(ui->pushButton_Left,SIGNAL(clicked()),this,SLOT(moveLEFT()));
    connect(ui->pushButton_Right,SIGNAL(clicked()),this,SLOT(moveRIGHT()));
    connect(ui->pushButton_Stop,SIGNAL(clicked()),this,SLOT(moveSTOP()));
    connect(ui->pushButton_startConnect,SIGNAL(clicked()),this,SLOT(startConnect()));
    connect(ui->pushButton_carStart,SIGNAL(clicked()),this,SLOT(moveUP()));
    connect(ui->pushButton_carStop,SIGNAL(clicked()),this,SLOT(moveSTOP()));
    connect(ui->pushButton_carDistanceOn,SIGNAL(clicked()),this,SLOT(startDistanceDetect()));
    connect(ui->pushButton_carDistanceOff,SIGNAL(clicked()),this,SLOT(stopDistanceDetect()));
}

//初始化红绿灯状态
void CarControl::initTrafficLight(){
    QPixmap pixmap("C:/Users/59236/Documents/ManagerGUI/traffic_gray.png");
    ui->label_light->setPixmap(pixmap);
    ui->label_light->show();
}

//初始化设备IP
void CarControl::initDeviceIP(){
    DtoIP[0]="IP Address Here1";
    DtoIP[1]="IP Address Here2";
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
    CtoT["TLIGHT"]=20;

    LtoS["GRAY"]=0;
    LtoS["RED"]=1;
    LtoS["YELLOW"]=2;
    LtoS["GREEN"]=3;

    CtoT["CAR"]=30;
}

//选择设备IP
void CarControl::selectDeviceIP(){
    if(ui->radioButton_Car1->isChecked()==true)
        ui->lineEdit_carIP->setText(DtoIP[0]);
    else if(ui->radioButton_Car2->isChecked()==true)
        ui->lineEdit_carIP->setText(DtoIP[1]);
}

//小车移动
void CarControl::moveCar(int direction){
    switch (direction) {
    case UP:
        qDebug()<<"UP";
        sender->sender(destIP,destPort,"CAR","MOVE_UP",21);
        break;
    case DOWN:
        qDebug()<<"DOWN";
        sender->sender(destIP,destPort,"CAR","MOVE_DOWN",22);
        break;
    case LEFT:
        qDebug()<<"LEFT";
        sender->sender(destIP,destPort,"CAR","MOVE_LEFT",23);
        break;
    case RIGHT:
        qDebug()<<"RIGHT";
        sender->sender(destIP,destPort,"CAR","MOVE_RIGHT",24);
        break;
    case STOP:
        qDebug()<<"STOP";
        sender->sender(destIP,destPort,"CAR","MOVE_STOP",25);
        break;
    default:

        break;
    }

}

//UP
void CarControl::moveUP(){ moveCar(UP); }

//DOWN
void CarControl::moveDOWN(){ moveCar(DOWN); }

//LEFT
void CarControl::moveLEFT(){ moveCar(LEFT); }

//RIGHT
void CarControl::moveRIGHT(){ moveCar(RIGHT); }

//STOP
void CarControl::moveSTOP(){ moveCar(STOP); }

//确认连接对应小车，并且初始化接收
void CarControl::startConnect(){
    //初始化小车IP&端口
    destIP=ui->lineEdit_carIP->text();
    destPort=ui->lineEdit_carPort->text().toInt();
    //绑定本身
    selfIP="192.168.191.1";
    //selfIP="49.140.114.107";
    ui->label_selfIP->setText(selfIP);
    selfPort=ui->lineEdit_selfPort->text().toInt();
    //接收端Socket绑定与初始化
    receiver=new QUdpSocket();
    initRecvSocket(selfIP,selfPort);
}

//udp recv
void CarControl::initRecvSocket(QString IP,int Port){
    receiver->bind(QHostAddress(IP),Port);
    //信号触发
    connect(receiver,SIGNAL(readyRead()),this,SLOT(receiveInfo()));
}

//获取udp信息
void CarControl::receiveInfo(){
    while (receiver->hasPendingDatagrams())
    {
        QByteArray datagram;
        datagram.resize(receiver->pendingDatagramSize());
        receiver->readDatagram(datagram.data(), datagram.size());
        //QByteArray转QString
        QString info(datagram);
        qDebug()<<info;
        ui->textEdit_info->setText(info);
        //分割字符串
        QStringList Msg= info.split(" ");
        //处理文件信息
        processmsg(Msg);
    }
}

//处理内容
void CarControl::processmsg(QStringList msg){
    QString srcIP=msg.at(0);
    QString type=msg.at(1);
    QString curTime=msg.at(2);
    QString info=msg.at(3);
    int cType=msg.at(4).toInt();
    int color,distance;

    switch (CtoT[type]) {
    case 20:            //如果是改变交通灯状态颜色
        color=LtoS[info];
        changeTrafficLightState(color);
        break;

    case 30:            //如果是避障小车发回的距离
        if(cType==35){
            distance = info.toInt();
            ui->lineEdit_CarDistance->setText("Distance is "+info+" cm");
            break;
        }
    }
}

//切换界面红绿灯颜色
void CarControl::changeTrafficLightState(int color){
    QPixmap pgray("C:/Users/59236/Documents/ManagerGUI/traffic_gray.png");
    QPixmap pred("C:/Users/59236/Documents/ManagerGUI/traffic_red.png");
    QPixmap pyellow("C:/Users/59236/Documents/ManagerGUI/traffic_yellow.png");
    QPixmap pgreen("C:/Users/59236/Documents/ManagerGUI/traffic_green.png");
    switch(color){
    case 0:         //灰色
        ui->label_light->setPixmap(pgray);
        ui->label_light->show();
        break;
    case 1:         //红色
        ui->label_light->setPixmap(pred);
        ui->label_light->show();
        break;
    case 2:         //红色
        ui->label_light->setPixmap(pyellow);
        ui->label_light->show();
        break;
    case 3:         //红色
        ui->label_light->setPixmap(pgreen);
        ui->label_light->show();
        break;
    }
}

//开启距离检测
void CarControl::startDistanceDetect(){
    qDebug()<<"startDistanceDetect";
    sender->sender(destIP,destPort,"CAR","AVOIDANCE_START",31);
}

//停止距离检测
void CarControl::stopDistanceDetect(){
    qDebug()<<"stopDistanceDetect";
    sender->sender(destIP,destPort,"CAR","AVOIDANCE_STOP",32);
}
