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
    MainWidget.cpp \
    Role.cpp \
    User.cpp \
    Xing.cpp \
    login.cpp \
    main.cpp


HEADERS += \
    Button.h \
    Enemy.h \
    Hero.h \
    Jiachong.h \
    MainWidget.h \
    Role.h \
    User.h \
    Xing.h \
    login.h \
    star.h

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
    Rail/rail.qrc

DISTFILES += \
    Rail/JiaChong.png
