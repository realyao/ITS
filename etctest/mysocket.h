#ifndef MYSOCKET_H
#define MYSOCKET_H

#include <QString>
//用于UDP的头文件
#include <QtNetwork/QUdpSocket>
//用于获取IP
#include <QtNetwork/QNetworkInterface>
#include <QList>
//用于获取时间
#include <QDateTime>
#include <QTextEdit>

class MySocket{

public:
    QString IP;
    QString port;
    QUdpSocket* mSocket;

    QTextEdit* info;

    MySocket();

    //udp sender
    void sender(QString IP,int port,QString Type,QString info,int command);

    //获取IP地址
    QString getHostIpAddress();

    //udp recv
    void initRecvSocket(QString selfIP,int Port);

    //获取udp信息
    void recvInfo();

private:


};

#endif // MYSOCKET_H
