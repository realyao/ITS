#ifndef CHARGE_H
#define CHARGE_H

#include <QDialog>
#include <QProcess>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class Charge;
}

class Charge : public QDialog
{
    Q_OBJECT

public:
    explicit Charge(QWidget *parent = nullptr);
    ~Charge();
    QProcess *_process;
    bool flag;
    QString info;

private:
    Ui::Charge *ui;

private slots:
    //读取卡片信息
    void readCard();

    //给卡片充钱
    void chargeCard();

    //读取标准输出
    void readFromStdOut();
};

#endif // CHARGE_H
