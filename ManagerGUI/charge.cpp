#include "charge.h"
#include "ui_charge.h"

Charge::Charge(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Charge)
{
    ui->setupUi(this);
    flag=false;
    connect(ui->pushButton_ReadCard,SIGNAL(clicked()),this,SLOT(readCard()));
    connect(ui->pushButton_charge,SIGNAL(clicked()),this,SLOT(chargeCard()));
    //_process=new QProcess(this);
    //connect(_process, SIGNAL(readyReadStandardOutput()),this,SLOT(readFromStdOut()));
}

Charge::~Charge()
{
    delete ui;
}

//读取卡片信息
void Charge::readCard(){
    /*
    QStringList args;
    args.append("C:/Users/59236/Desktop/Car/MFRC522-python/Charge.py");
    args.append("R");
    _process->start(QString("Python.exe"),args);
    while(flag==false){}
    QStringList list=info.split("|");
    ui->lineEdit_ID->setText(list[0]);
    ui->lineEdit_balance->setText(list[1]);
    flag=false;
    */
}

//给卡片充钱
void Charge::chargeCard(){
    /*
    if(QString::compare(ui->lineEdit_passwd->text(),"888888")!=0)
        return;
    QString value=ui->lineEdit_chargeValue->text();
    QStringList args;
    args.append("C:/Users/59236/Desktop/Car/MFRC522-python/Charge.py");
    args.append("W");
    args.append(value);
    _process->start(QString("Python.exe"),args);
    while(flag==false){}
    qDebug() << "Finished";
    QMessageBox::information(this,tr("Write balance"),"SUCCESS" ,tr("yes"));
    */
}

//读取标准输出
void Charge::readFromStdOut(){
    //info=_process->readAllStandardOutput();
    //flag=true;
}
