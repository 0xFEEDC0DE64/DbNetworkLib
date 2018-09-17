QT += core network
QT -= gui widgets

PROJECT_ROOT = ../..

TARGET = dbnetwork

DEFINES += DBNETWORKLIB_LIBRARY

SOURCES += \
    utils/netutils.cpp

HEADERS += dbnetworklib_global.h \
    utils/netutils.h

FORMS +=

RESOURCES +=

TRANSLATIONS +=

include($${PROJECT_ROOT}/lib.pri)
