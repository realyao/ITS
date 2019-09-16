/********************************************************************************
** Form generated from reading UI file 'charge.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARGE_H
#define UI_CHARGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Charge
{
public:
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_ReadCard;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_ID;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_balance;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_passwd;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_chargeValue;
    QPushButton *pushButton_charge;

    void setupUi(QDialog *Charge)
    {
        if (Charge->objectName().isEmpty())
            Charge->setObjectName(QStringLiteral("Charge"));
        Charge->resize(361, 271);
        groupBox = new QGroupBox(Charge);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 341, 251));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\345\256\213\344\275\223"));
        font.setPointSize(10);
        groupBox->setFont(font);
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 30, 323, 95));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setStyleStrategy(QFont::PreferAntialias);
        label->setFont(font1);

        verticalLayout_2->addWidget(label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_ReadCard = new QPushButton(widget);
        pushButton_ReadCard->setObjectName(QStringLiteral("pushButton_ReadCard"));

        horizontalLayout_3->addWidget(pushButton_ReadCard);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_ID = new QLineEdit(widget);
        lineEdit_ID->setObjectName(QStringLiteral("lineEdit_ID"));

        horizontalLayout->addWidget(lineEdit_ID);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 7);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_balance = new QLineEdit(widget);
        lineEdit_balance->setObjectName(QStringLiteral("lineEdit_balance"));

        horizontalLayout_2->addWidget(lineEdit_balance);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 7);

        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_3);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 140, 321, 95));
        verticalLayout_4 = new QVBoxLayout(widget1);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_4->addWidget(label_6);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_passwd = new QLineEdit(widget1);
        lineEdit_passwd->setObjectName(QStringLiteral("lineEdit_passwd"));

        horizontalLayout_4->addWidget(lineEdit_passwd);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_chargeValue = new QLineEdit(widget1);
        lineEdit_chargeValue->setObjectName(QStringLiteral("lineEdit_chargeValue"));

        horizontalLayout_5->addWidget(lineEdit_chargeValue);


        verticalLayout_3->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_3);

        pushButton_charge = new QPushButton(widget1);
        pushButton_charge->setObjectName(QStringLiteral("pushButton_charge"));

        horizontalLayout_6->addWidget(pushButton_charge);


        verticalLayout_4->addLayout(horizontalLayout_6);


        retranslateUi(Charge);

        QMetaObject::connectSlotsByName(Charge);
    } // setupUi

    void retranslateUi(QDialog *Charge)
    {
        Charge->setWindowTitle(QApplication::translate("Charge", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("Charge", "\345\201\234\350\275\246\345\234\272/ETC\346\237\245\350\257\242\345\205\205\345\200\274\345\271\263\345\217\260", nullptr));
        label->setText(QApplication::translate("Charge", "\350\257\267\346\212\212\345\215\241\347\211\207\346\224\276\347\275\256\345\234\250\350\257\273\345\206\231\345\231\250\344\270\212\357\274\232", nullptr));
        pushButton_ReadCard->setText(QApplication::translate("Charge", "\350\257\273\345\215\241", nullptr));
        label_2->setText(QApplication::translate("Charge", "ID:", nullptr));
        label_3->setText(QApplication::translate("Charge", "\344\275\231\351\242\235:", nullptr));
        label_6->setText(QApplication::translate("Charge", "\347\256\241\347\220\206\345\221\230\345\205\205\345\200\274\351\207\221\351\242\235", nullptr));
        label_4->setText(QApplication::translate("Charge", "\345\205\205\345\200\274\345\257\206\347\240\201\357\274\232", nullptr));
        label_5->setText(QApplication::translate("Charge", "\345\205\205\345\200\274\351\207\221\351\242\235\357\274\232", nullptr));
        pushButton_charge->setText(QApplication::translate("Charge", "\345\205\205\345\200\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Charge: public Ui_Charge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARGE_H
