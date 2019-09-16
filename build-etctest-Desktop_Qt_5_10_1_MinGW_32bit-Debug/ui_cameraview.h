/********************************************************************************
** Form generated from reading UI file 'cameraview.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERAVIEW_H
#define UI_CAMERAVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CameraView
{
public:
    QPushButton *pushButton_detection;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_videoIP;
    QLineEdit *lineEdit_videoIP;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_videoPort;
    QLineEdit *lineEdit_videoPort;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_command;
    QLineEdit *lineEdit_videocommand;
    QPushButton *pushButton_openVideo;

    void setupUi(QDialog *CameraView)
    {
        if (CameraView->objectName().isEmpty())
            CameraView->setObjectName(QStringLiteral("CameraView"));
        CameraView->resize(393, 177);
        pushButton_detection = new QPushButton(CameraView);
        pushButton_detection->setObjectName(QStringLiteral("pushButton_detection"));
        pushButton_detection->setGeometry(QRect(130, 130, 151, 28));
        layoutWidget = new QWidget(CameraView);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 371, 91));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_videoIP = new QLabel(layoutWidget);
        label_videoIP->setObjectName(QStringLiteral("label_videoIP"));

        horizontalLayout->addWidget(label_videoIP);

        lineEdit_videoIP = new QLineEdit(layoutWidget);
        lineEdit_videoIP->setObjectName(QStringLiteral("lineEdit_videoIP"));

        horizontalLayout->addWidget(lineEdit_videoIP);

        horizontalLayout->setStretch(0, 4);
        horizontalLayout->setStretch(1, 6);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_videoPort = new QLabel(layoutWidget);
        label_videoPort->setObjectName(QStringLiteral("label_videoPort"));

        horizontalLayout_2->addWidget(label_videoPort);

        lineEdit_videoPort = new QLineEdit(layoutWidget);
        lineEdit_videoPort->setObjectName(QStringLiteral("lineEdit_videoPort"));

        horizontalLayout_2->addWidget(lineEdit_videoPort);

        horizontalLayout_2->setStretch(0, 4);
        horizontalLayout_2->setStretch(1, 6);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_command = new QLabel(layoutWidget);
        label_command->setObjectName(QStringLiteral("label_command"));

        horizontalLayout_4->addWidget(label_command);

        lineEdit_videocommand = new QLineEdit(layoutWidget);
        lineEdit_videocommand->setObjectName(QStringLiteral("lineEdit_videocommand"));

        horizontalLayout_4->addWidget(lineEdit_videocommand);

        horizontalLayout_4->setStretch(0, 4);
        horizontalLayout_4->setStretch(1, 6);

        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_3->addLayout(verticalLayout);

        pushButton_openVideo = new QPushButton(layoutWidget);
        pushButton_openVideo->setObjectName(QStringLiteral("pushButton_openVideo"));

        horizontalLayout_3->addWidget(pushButton_openVideo);


        retranslateUi(CameraView);
        QObject::connect(pushButton_openVideo, SIGNAL(clicked()), CameraView, SLOT(openVideoStream()));
        QObject::connect(pushButton_detection, SIGNAL(clicked()), CameraView, SLOT(trafficDetection()));

        QMetaObject::connectSlotsByName(CameraView);
    } // setupUi

    void retranslateUi(QDialog *CameraView)
    {
        CameraView->setWindowTitle(QApplication::translate("CameraView", "Dialog", nullptr));
        pushButton_detection->setText(QApplication::translate("CameraView", "\345\274\200\345\247\213\347\272\242\347\201\257\346\243\200\346\265\213", nullptr));
        label_videoIP->setText(QApplication::translate("CameraView", "\350\247\206\351\242\221\346\265\201IP\357\274\232", nullptr));
        label_videoPort->setText(QApplication::translate("CameraView", "\350\247\206\351\242\221\346\265\201\347\253\257\345\217\243\357\274\232", nullptr));
        label_command->setText(QApplication::translate("CameraView", "\347\211\271\346\256\212\345\221\275\344\273\244\357\274\232", nullptr));
        pushButton_openVideo->setText(QApplication::translate("CameraView", "\346\211\223\345\274\200\350\247\206\351\242\221\346\265\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CameraView: public Ui_CameraView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERAVIEW_H
