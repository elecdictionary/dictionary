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
    vocabulary.cpp \
    addsentenceswindow.cpp \
    mydate.cpp \
    recitewordwindow.cpp \
    vocabularyinfowindow.cpp

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
    vocabulary.h \
    mysentences.h \
    addsentenceswindow.h \
    allstruct.h \
    mydate.h \
    recitewordwindow.h \
    vocabularyinfowindow.h

FORMS    += mainwindow.ui \
    adjustwindow.ui \
    registerwindow.ui \
    menuwindow.ui \
    searchwordwindow.ui \
    addsentenceswindow.ui \
    recitewordwindow.ui \
    vocabularyinfowindow.ui

CONFIG    += c++11
