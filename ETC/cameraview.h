#ifndef CAMERAVIEW_H
#define CAMERAVIEW_H

#include <QDialog>

//OpenCV
//项目文件所要使用的所有的头文件
#include "highgui.h"
#include <cv.h>
#include <cxcore.h>
#include <opencv2/opencv.hpp>
#include <ope ncv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <iostream>
#include <string>
#include <QDebug>

#include <QProcess>

#include <threadrd.h>
using namespace cv;

namespace Ui {
class CameraView;
}

class CameraView : public QDialog
{
    Q_OBJECT

public:
    explicit CameraView(QWidget *parent = nullptr);
    ~CameraView();
    QString IP;
    int port;
    QString addr;

private:
    Ui::CameraView *ui;

private slots:
    //打开视频流
    void openVideoStream();

    //初始化视频流
    void initVideoStream();

    //红灯检测
    void trafficDetection();

};

#endif // CAMERAVIEW_H
