#-------------------------------------------------
#
# Project created by QtCreator 2018-07-23T17:02:56
#
#-------------------------------------------------

QT       += core gui widgets

TARGET = kanban
INCLUDEPATH += src
CONFIG += c++17
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        src/main.cpp \
        src/ui/mainwindow.cpp

HEADERS += \
        src/ui/mainwindow.h

FORMS += \
        src/ui/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
