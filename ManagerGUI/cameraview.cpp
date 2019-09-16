#include "cameraview.h"
#include "ui_cameraview.h"



CameraView::CameraView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CameraView)
{
    ui->setupUi(this);
    ui->lineEdit_videocommand->setText("?action=stream");
}

CameraView::~CameraView()
{
    delete ui;
}

//初始化视频流
void CameraView::initVideoStream(){
    IP=ui->lineEdit_videoIP->text();
    port=ui->lineEdit_videoPort->text().toInt();
    QString command = ui->lineEdit_videocommand->text();
    addr="http://"+IP+":"+QString::number(port,10)+"/"+command;
    qDebug()<<addr;
}

//打开视频流
void CameraView::openVideoStream(){
    initVideoStream();
    QByteArray arr = addr.toUtf8();
    std::string c_addr = arr.data();
    VideoCapture cap;
    Mat img;
    int f = 1;
    try {
        while (true){
            cap.open(c_addr);
            if (cap.isOpened()){
                cap.read(img);
                imshow("win", img);
                char key = waitKey(1);
                if (key == 27)break;
                //按Q捕获图像
                if (key == 'q' || key == 'Q'){

                }
                if ((uchar)waitKey(1) == 27)
                    //break;
                    return;
            }
            else {
                break;
            }
        }
    }
    catch (...) {
        qDebug() << "连接中断" << endl;
    }
}

//红灯检测
void CameraView::trafficDetection(){
    initVideoStream();
    QStringList args;
    args.append("C:/Users/59236/Desktop/Car/MFRC522-python/traffic.py");
    args.append(addr);

    /*
    ThreadRD *newthread = new ThreadRD();
    newthread->ag=args;
    newthread->run();
    */

    QProcess *_process=new QProcess();
    connect(_process,SIGNAL(finished(int, QProcess::ExitStatus)), this, SLOT(continueConvert(int,QProcess::ExitStatus)));
    _process->start(QString("Python.exe"), args);

    //QProcess::execute(QString("Python.exe"), args);
}


