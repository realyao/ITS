#include <threadrd.h>
#include <QDebug>

ThreadRD::ThreadRD(){

}

void ThreadRD::run(){
    //rfidinfo->setText("123");
    //MySocket* sk=new MySocket();
    //sk->sender("192.168.191.1",9999,"TEST","AAAAAA",1);
    QProcess::execute(QString("Python.exe"), ag);
}
