#ifndef THREADRFID_H
#define THREADRFID_H

#include <QThread>
#include <QTextEdit>
#include <mysocket.h>
#include <QStringList>
#include <QProcess>

class ThreadRD: public QThread{
public:
    //构造函数
    ThreadRD();

    //继承QThread虚函数run()
    void run();

    //当前线程的名称
    QString threadname;
    QStringList ag;



};

#endif // THREADRFID_H
