QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Enemy.cpp \
    Hero.cpp \
    Jiachong.cpp \
    MainWidget.cpp \
    Role.cpp \
    dialoglogin.cpp \
    Xing.cpp \
    main.cpp \
    star.cpp

HEADERS += \
    Enemy.h \
    Hero.h \
    Jiachong.h \
    MainWidget.h \
    Role.h \
    dialoglogin.h \
    Xing.h \
    star.h

FORMS += \
    MainWidget.ui \
    dialoglogin.ui

    dialoglogin.ui
    MainWidget.ui


TRANSLATIONS += \
    StarRail_zh_CN.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Rail/rail.qrc \
    Rail/rail.qrc

DISTFILES += \
    Rail/BK1.jpg \
    Rail/BK2.png \
    Rail/JiaChong.png \
    Rail/StarRail.ico \
    Rail/XiEr.png \
    Rail/Xing.png \
    Rail/bgTest.png \
    Rail/xierE0.png \
    Rail/xierIcon.png \
    Rail/xierQ1.png
