#-------------------------------------------------
#
# Project created by QtCreator 2016-03-30T22:48:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Contact Book
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    searchwindow.cpp \
    createwindow.cpp \
    editwindow.cpp \
    contactwindow.cpp \
    deletewindow.cpp \
    searchbynamewindow.cpp \
    searchbysurnamewindow.cpp \
    editnamewindow.cpp \
    editsurnamewindow.cpp \
    editnumberwindow.cpp

HEADERS  += mainwindow.h \
    searchwindow.h \
    createwindow.h \
    editwindow.h \
    contactwindow.h \
    deletewindow.h \
    searchbynamewindow.h \
    searchbysurnamewindow.h \
    editnamewindow.h \
    editsurnamewindow.h \
    editnumberwindow.h

FORMS    += mainwindow.ui \
    searchwindow.ui \
    createwindow.ui \
    contactwindow.ui \
    deletewindow.ui \
    searchbynamewindow.ui \
    searchbysurnamewindow.ui \
    editnamewindow.ui \
    editsurnamewindow.ui \
    editnumberwindow.ui

RESOURCES += \
    resourses.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../Engine/release/ -lEngine
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../Engine/debug/ -lEngine
else:unix: LIBS += -L$$OUT_PWD/../Engine/ -lEngine

INCLUDEPATH += $$PWD/../Engine
DEPENDPATH += $$PWD/../Engine
