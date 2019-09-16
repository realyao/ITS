#include <mysocket.h>


MySocket::MySocket(){
    mSocket=new QUdpSocket();
}

//发送器
void MySocket::sender(QString IP,int port,QString Type,QString info,int command){
    //获取当前时间
    QDateTime current_date_time =QDateTime::currentDateTime();
    QString current_date =current_date_time.toString("yyyy-MM-dd-hh-mm-ss");

    QString sendinfo=getHostIpAddress()+" "+Type+" "+current_date+" "+info+" "+QString::number(command,10);
    //ui->textEdit_info->setText("send "+sendinfo);
    qint64 len=mSocket->writeDatagram(sendinfo.toUtf8(),QHostAddress(IP),port);

}

//获取本机IP地址
QString MySocket::getHostIpAddress(){
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
void MySocket::initRecvSocket(QString selfIP,int Port){
    mSocket->bind(QHostAddress(selfIP),Port);
    //信号触发
    //connect(mSocket,SIGNAL(readyRead()),this,SLOT(recvInfo()));
}

//获取udp信息
void MySocket::recvInfo(){
    while (mSocket->hasPendingDatagrams())
    {
        QByteArray datagram;
        datagram.resize(mSocket->pendingDatagramSize());
        mSocket->readDatagram(datagram.data(), datagram.size());
        //QByteArray转QString
        QString info(datagram);
        //ui->textEdit_info->setText(info);
    }

}
