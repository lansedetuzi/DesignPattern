#-------------------------------------------------
#
# Project created by QtCreator 2015-12-09T22:29:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AbstractFactory
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Product.cpp \
    Factory.cpp

HEADERS  += mainwindow.h \
    Product.h \
    Factory.h
