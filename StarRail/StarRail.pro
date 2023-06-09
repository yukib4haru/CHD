QT       += core gui
QT       += core sql
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
    Button.cpp \
    Enemy.cpp \
    Hero.cpp \
    Jiachong.cpp \
    Lifebar.cpp \
    MainWidget.cpp \
    Movetimer.cpp \
    Natasha.cpp \
    Role.cpp \
    TurnManager.cpp \
    User.cpp \
    Xing.cpp \
    login.cpp \
    main.cpp \
    xier.cpp


HEADERS += \
    Button.h \
    Enemy.h \
    Hero.h \
    Jiachong.h \
    Lifebar.h \
    MainWidget.h \
    Movetimer.h \
    Natasha.h \
    Role.h \
    TurnManager.h \
    User.h \
    Xing.h \
    login.h \
    star.h \
    xier.h

FORMS += \
    MainWidget.ui \
    login.ui

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
    Rail/Xing0.png \
    Rail/background.jpg \
    Rail/bgTest.png \
    Rail/jiachong0.png \
    Rail/jiachong1.png \
    Rail/login2.gif \
    Rail/march0.png \
    Rail/xier0.png \
    Rail/xierE0.png \
    Rail/xierIcon.png \
    Rail/xierQ1.png \
    Rail/xingT.png

LIBS += -lz

CONFIG += resources_big

