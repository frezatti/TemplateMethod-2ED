QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    controler.cpp \
    main.cpp \
    mainwindow.cpp \
    professor.cpp \
    search.cpp \
    searchid.cpp \
    searchname.cpp \
    sort.cpp \
    sortcontracttype.cpp \
    sortdepo.cpp \
    sortdtn.cpp \
    sortmat.cpp \
    sortname.cpp \
    sorttitle.cpp

HEADERS += \
    controler.h \
    mainwindow.h \
    professor.h \
    search.h \
    searchid.h \
    searchname.h \
    sort.h \
    sortcontracttype.h \
    sortdepo.h \
    sortdtn.h \
    sortmat.h \
    sortname.h \
    sorttitle.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
