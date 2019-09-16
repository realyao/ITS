/********************************************************************************
** Form generated from reading UI file 'carcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARCONTROL_H
#define UI_CARCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CarControl
{
public:
    QGroupBox *groupBox;
    QRadioButton *radioButton_Car1;
    QRadioButton *radioButton_Car2;
    QFrame *line;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_carIP;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_carPort;
    QPushButton *pushButton_startConnect;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLabel *label_selfIP;
    QLabel *label_7;
    QLineEdit *lineEdit_selfPort;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_Up;
    QPushButton *pushButton_Left;
    QPushButton *pushButton_Stop;
    QPushButton *pushButton_Right;
    QPushButton *pushButton_Down;
    QGroupBox *groupBox_3;
    QLabel *label_3;
    QLabel *label_light;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_carStart;
    QPushButton *pushButton_carStop;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_carDistanceOn;
    QPushButton *pushButton_carDistanceOff;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_CarDistance;
    QTextEdit *textEdit_info;
    QLabel *label_5;

    void setupUi(QDialog *CarControl)
    {
        if (CarControl->objectName().isEmpty())
            CarControl->setObjectName(QStringLiteral("CarControl"));
        CarControl->resize(421, 606);
        groupBox = new QGroupBox(CarControl);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 361, 151));
        radioButton_Car1 = new QRadioButton(groupBox);
        radioButton_Car1->setObjectName(QStringLiteral("radioButton_Car1"));
        radioButton_Car1->setGeometry(QRect(20, 20, 71, 19));
        radioButton_Car2 = new QRadioButton(groupBox);
        radioButton_Car2->setObjectName(QStringLiteral("radioButton_Car2"));
        radioButton_Car2->setGeometry(QRect(90, 20, 71, 19));
        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 30, 361, 30));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 50, 356, 89));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_carIP = new QLineEdit(widget);
        lineEdit_carIP->setObjectName(QStringLiteral("lineEdit_carIP"));

        horizontalLayout->addWidget(lineEdit_carIP);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 7);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_carPort = new QLineEdit(widget);
        lineEdit_carPort->setObjectName(QStringLiteral("lineEdit_carPort"));

        horizontalLayout_2->addWidget(lineEdit_carPort);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 7);

        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);

        pushButton_startConnect = new QPushButton(widget);
        pushButton_startConnect->setObjectName(QStringLiteral("pushButton_startConnect"));

        horizontalLayout_3->addWidget(pushButton_startConnect);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_7->addWidget(label_6);

        label_selfIP = new QLabel(widget);
        label_selfIP->setObjectName(QStringLiteral("label_selfIP"));

        horizontalLayout_7->addWidget(label_selfIP);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        lineEdit_selfPort = new QLineEdit(widget);
        lineEdit_selfPort->setObjectName(QStringLiteral("lineEdit_selfPort"));

        horizontalLayout_7->addWidget(lineEdit_selfPort);

        horizontalLayout_7->setStretch(0, 2);
        horizontalLayout_7->setStretch(1, 4);
        horizontalLayout_7->setStretch(2, 2);
        horizontalLayout_7->setStretch(3, 4);

        verticalLayout_4->addLayout(horizontalLayout_7);

        groupBox_2 = new QGroupBox(CarControl);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 180, 171, 131));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(37, 20, 101, 100));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Up = new QPushButton(layoutWidget);
        pushButton_Up->setObjectName(QStringLiteral("pushButton_Up"));

        gridLayout->addWidget(pushButton_Up, 0, 1, 1, 1);

        pushButton_Left = new QPushButton(layoutWidget);
        pushButton_Left->setObjectName(QStringLiteral("pushButton_Left"));

        gridLayout->addWidget(pushButton_Left, 1, 0, 1, 1);

        pushButton_Stop = new QPushButton(layoutWidget);
        pushButton_Stop->setObjectName(QStringLiteral("pushButton_Stop"));

        gridLayout->addWidget(pushButton_Stop, 1, 1, 1, 1);

        pushButton_Right = new QPushButton(layoutWidget);
        pushButton_Right->setObjectName(QStringLiteral("pushButton_Right"));

        gridLayout->addWidget(pushButton_Right, 1, 2, 1, 1);

        pushButton_Down = new QPushButton(layoutWidget);
        pushButton_Down->setObjectName(QStringLiteral("pushButton_Down"));

        gridLayout->addWidget(pushButton_Down, 2, 1, 1, 1);

        groupBox_3 = new QGroupBox(CarControl);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(220, 180, 171, 131));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 30, 81, 16));
        label_light = new QLabel(groupBox_3);
        label_light->setObjectName(QStringLiteral("label_light"));
        label_light->setGeometry(QRect(70, 70, 30, 30));
        groupBox_4 = new QGroupBox(CarControl);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(30, 320, 361, 171));
        layoutWidget1 = new QWidget(groupBox_4);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 20, 257, 136));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_carStart = new QPushButton(layoutWidget1);
        pushButton_carStart->setObjectName(QStringLiteral("pushButton_carStart"));

        horizontalLayout_4->addWidget(pushButton_carStart);

        pushButton_carStop = new QPushButton(layoutWidget1);
        pushButton_carStop->setObjectName(QStringLiteral("pushButton_carStop"));

        horizontalLayout_4->addWidget(pushButton_carStop);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton_carDistanceOn = new QPushButton(layoutWidget1);
        pushButton_carDistanceOn->setObjectName(QStringLiteral("pushButton_carDistanceOn"));

        verticalLayout_2->addWidget(pushButton_carDistanceOn);

        pushButton_carDistanceOff = new QPushButton(layoutWidget1);
        pushButton_carDistanceOff->setObjectName(QStringLiteral("pushButton_carDistanceOff"));

        verticalLayout_2->addWidget(pushButton_carDistanceOff);


        horizontalLayout_6->addLayout(verticalLayout_2);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_6->addWidget(pushButton_2);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lineEdit_CarDistance = new QLineEdit(layoutWidget1);
        lineEdit_CarDistance->setObjectName(QStringLiteral("lineEdit_CarDistance"));

        horizontalLayout_5->addWidget(lineEdit_CarDistance);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_5);

        textEdit_info = new QTextEdit(CarControl);
        textEdit_info->setObjectName(QStringLiteral("textEdit_info"));
        textEdit_info->setGeometry(QRect(30, 516, 361, 71));
        label_5 = new QLabel(CarControl);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 500, 72, 15));

        retranslateUi(CarControl);

        QMetaObject::connectSlotsByName(CarControl);
    } // setupUi

    void retranslateUi(QDialog *CarControl)
    {
        CarControl->setWindowTitle(QApplication::translate("CarControl", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("CarControl", "\345\260\217\350\275\246\350\277\236\346\216\245", nullptr));
        radioButton_Car1->setText(QApplication::translate("CarControl", "\345\260\217\350\275\2461", nullptr));
        radioButton_Car2->setText(QApplication::translate("CarControl", "\345\260\217\350\275\2462", nullptr));
        label->setText(QApplication::translate("CarControl", "IP\345\234\260\345\235\200\357\274\232", nullptr));
        label_2->setText(QApplication::translate("CarControl", "\347\253\257\345\217\243\357\274\232", nullptr));
        pushButton_startConnect->setText(QApplication::translate("CarControl", "\347\241\256\350\256\244\350\277\236\346\216\245", nullptr));
        label_6->setText(QApplication::translate("CarControl", "\346\234\254\346\234\272IP\357\274\232", nullptr));
        label_selfIP->setText(QApplication::translate("CarControl", "NaN", nullptr));
        label_7->setText(QApplication::translate("CarControl", "\346\234\254\346\234\272\347\253\257\345\217\243\357\274\232", nullptr));
        groupBox_2->setTitle(QApplication::translate("CarControl", "\346\226\271\345\220\221\347\233\230", nullptr));
        pushButton_Up->setText(QApplication::translate("CarControl", "\342\206\221", nullptr));
        pushButton_Left->setText(QApplication::translate("CarControl", "\342\206\220", nullptr));
        pushButton_Stop->setText(QApplication::translate("CarControl", "\342\226\240", nullptr));
        pushButton_Right->setText(QApplication::translate("CarControl", "\342\206\222", nullptr));
        pushButton_Down->setText(QApplication::translate("CarControl", "\342\206\223", nullptr));
        groupBox_3->setTitle(QApplication::translate("CarControl", "\345\275\223\345\211\215\346\215\225\350\216\267\347\272\242\347\273\277\347\201\257\347\212\266\346\200\201", nullptr));
        label_3->setText(QApplication::translate("CarControl", "\347\272\242\347\273\277\347\201\257\347\212\266\346\200\201", nullptr));
        label_light->setText(QApplication::translate("CarControl", " /", nullptr));
        groupBox_4->setTitle(QApplication::translate("CarControl", "\345\212\237\350\203\275\345\214\272", nullptr));
        pushButton_carStart->setText(QApplication::translate("CarControl", "\345\220\257\345\212\250", nullptr));
        pushButton_carStop->setText(QApplication::translate("CarControl", "\345\201\234\346\255\242", nullptr));
        pushButton_carDistanceOn->setText(QApplication::translate("CarControl", "\345\274\200\345\220\257\344\277\235\346\214\201\350\275\246\350\267\235", nullptr));
        pushButton_carDistanceOff->setText(QApplication::translate("CarControl", "\345\205\263\351\227\255\344\277\235\346\214\201\350\275\246\350\267\235", nullptr));
        pushButton_2->setText(QApplication::translate("CarControl", "\350\275\246\350\275\275\345\275\261\345\203\217", nullptr));
        label_4->setText(QApplication::translate("CarControl", "\351\230\262\346\222\236\350\275\246\350\267\235\357\274\232", nullptr));
        label_5->setText(QApplication::translate("CarControl", "\344\277\241\346\201\257\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CarControl: public Ui_CarControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARCONTROL_H
