#-------------------------------------------------
#
# Project created by QtCreator 2016-05-05T20:00:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Edictionary
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ediccontroler.cpp \
    edicuser.cpp \
    myrand.cpp \
    adjustwindow.cpp \
    registerwindow.cpp \
    wordnote.cpp \
    menuwindow.cpp \
    makeuser.cpp \
    usermodify.cpp \
    database.cpp \
    searchwordwindow.cpp \
    userlearn.cpp \
    vocabulary.cpp

HEADERS  += mainwindow.h \
    edicuser.h \
    ediccontroler.h \
    myrand.h \
    adjustwindow.h \
    registerwindow.h \
    wordnote.h \
    menuwindow.h \
    makeuser.h \
    usermodify.h \
    database.h \
    searchwordwindow.h \
    userlearn.h \
    vocabulary.h

FORMS    += mainwindow.ui \
    adjustwindow.ui \
    registerwindow.ui \
    menuwindow.ui \
    searchwordwindow.ui

CONFIG    += c++11