#-------------------------------------------------
#
# Project created by QtCreator 2018-10-22T08:27:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = etctest
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


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    about.cpp \
    cameraview.cpp \
    carcontrol.cpp \
    charge.cpp \
    main.cpp \
    mainwindow.cpp \
    mysocket.cpp \
    threadrd.cpp

HEADERS += \
        mainwindow.h \
    about.h \
    cameraview.h \
    carcontrol.h \
    charge.h \
    mainwindow.h \
    mysocket.h

FORMS += \
        mainwindow.ui \
    about.ui \
    cameraview.ui \
    carcontrol.ui \
    charge.ui \
    mainwindow.ui

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../opencv/build/x64/vc15/lib/ -lopencv_world340
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../opencv/build/x64/vc15/lib/ -lopencv_world340d
else:unix:!macx: LIBS += -L$$PWD/../../../../opencv/build/x64/vc15/lib/ -lopencv_world340

INCLUDEPATH += $$PWD/../../../../opencv/build/x64/vc15
DEPENDPATH += $$PWD/../../../../opencv/build/x64/vc15




win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../opencv/build/x64/vc14/lib/ -lopencv_world340
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../opencv/build/x64/vc14/lib/ -lopencv_world340d
else:unix:!macx: LIBS += -L$$PWD/../../../../opencv/build/x64/vc14/lib/ -lopencv_world340

INCLUDEPATH += $$PWD/../../../../opencv/build/x64/vc14
DEPENDPATH += $$PWD/../../../../opencv/build/x64/vc14
