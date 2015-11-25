TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    CStrategy.cpp \
    CContext.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    IStrategy.h \
    CStrategy.h \
    CContext.h

