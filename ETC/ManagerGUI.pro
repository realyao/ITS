#-------------------------------------------------
#
# Project created by QtCreator 2018-10-10T08:31:48
#
#-------------------------------------------------

QT       += core gui
QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ManagerGUI
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    mysocket.cpp \
    cameraview.cpp \
    carcontrol.cpp \
    about.cpp \
    threadrd.cpp \
    charge.cpp

HEADERS += \
        mainwindow.h \
    mysocket.h \
    cameraview.h \
    carcontrol.h \
    about.h \
    threadrd.h \
    charge.h

FORMS += \
        mainwindow.ui \
    cameraview.ui \
    carcontrol.ui \
    about.ui \
    charge.ui





# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target






win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../opencv/build/x64/vc15/lib/ -lopencv_world340
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../opencv/build/x64/vc15/lib/ -lopencv_world340d
else:unix: LIBS += -L$$PWD/../../../../opencv/build/x64/vc15/lib/ -lopencv_world340

INCLUDEPATH += $$PWD/../../../../opencv/build/x64/vc15
DEPENDPATH += $$PWD/../../../../opencv/build/x64/vc15



INCLUDEPATH += $$PWD/../../../../opencv/build/x64/vc15
DEPENDPATH += $$PWD/../../../../opencv/build/x64/vc15

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../opencv/build/x64/vc14/lib/ -lopencv_world340
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../opencv/build/x64/vc14/lib/ -lopencv_world340d
else:unix: LIBS += -L$$PWD/../../../../opencv/build/x64/vc14/lib/ -lopencv_world340

INCLUDEPATH += $$PWD/../../../../opencv/build/x64/vc14
DEPENDPATH += $$PWD/../../../../opencv/build/x64/vc14
