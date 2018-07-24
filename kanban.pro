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

VERSION = 0.1
DEFINES += APP_VERSION=\\\"$$VERSION\\\"

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        src/main.cpp \
        src/card.cpp \
        src/kanlist.cpp \
        src/ui/mainwindow.cpp

HEADERS += \
        src/card.h \
        src/kanlist.h \
        src/ui/mainwindow.h

FORMS += \
        src/ui/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
