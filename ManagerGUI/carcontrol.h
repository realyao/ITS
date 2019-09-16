#ifndef CARCONTROL_H
#define CARCONTROL_H

#include <QDialog>
#include <QMap>
#include <QPushButton>
#include <QDebug>
#include <mysocket.h>

#define STOP    0
#define UP      1
#define DOWN    2
#define LEFT    3
#define RIGHT   4


namespace Ui {
class CarControl;
}

class CarControl : public QDialog
{
    Q_OBJECT

public:
    explicit CarControl(QWidget *parent = nullptr);
    ~CarControl();

    QMap<int,QString> DtoIP;
    QMap<QString,int> CtoT;
    QMap<QString,int> LtoS;

    QString destIP;
    int destPort;

    QString selfIP;
    int selfPort;

    MySocket* sender=new MySocket();        //发送socket
    QUdpSocket* receiver;                   //接收socket


    //按钮响应事件统一函数
    void connectEvent();

    //初始化设备IP
    void initDeviceIP();

    //初始化红绿灯状态
    void initTrafficLight();

    //小车移动
    void moveCar(int direction);

    //udp recv
    void initRecvSocket(QString selfIP,int Port);

    //处理内容
    void processmsg(QStringList msg);

    //切换界面红绿灯颜色
    void changeTrafficLightState(int color);



private:
    Ui::CarControl *ui;

private slots:
    //单选框选择初始化IP
    void selectDeviceIP();

    //UP
    void moveUP();

    //DOWN
    void moveDOWN();

    //LEFT
    void moveLEFT();

    //RIGHT
    void moveRIGHT();

    //STOP
    void moveSTOP();

    //确认连接对应小车，并且初始化接收
    void startConnect();

    //获取udp信息
    void receiveInfo();

    //开启距离检测
    void startDistanceDetect();

    //停止距离检测
    void stopDistanceDetect();


};

#endif // CARCONTROL_H
