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
    recitewordwindow.cpp \
    vocabularyinfowindow.cpp \
    changepasswordwindow.cpp \
    searchtextwordwindow.cpp \
    mylog.cpp \
    textwordinfowindow.cpp

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
    recitewordwindow.h \
    vocabularyinfowindow.h \
    changepasswordwindow.h \
    searchtextwordwindow.h \
    mylog.h \
    textwordinfowindow.h

FORMS    += mainwindow.ui \
    adjustwindow.ui \
    registerwindow.ui \
    menuwindow.ui \
    searchwordwindow.ui \
    addsentenceswindow.ui \
    recitewordwindow.ui \
    vocabularyinfowindow.ui \
    changepasswordwindow.ui \
    searchtextwordwindow.ui \
    textwordinfowindow.ui

CONFIG    += c++11
