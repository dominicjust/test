#-------------------------------------------------
#
# Project created by QtCreator 2018-09-22T12:03:52
#
#-------------------------------------------------

QT       += core gui
QMAKE_CXXFLAGS += -std=c++14

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TextFinder
TEMPLATE = app


SOURCES += main.cpp\
        textfinder.cpp

HEADERS  += textfinder.h

FORMS    += textfinder.ui

RESOURCES += \
    textfinder.qrc
