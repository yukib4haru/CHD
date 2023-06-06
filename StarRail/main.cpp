#include "Mainwindow.h"
#include "login.h"

#include"MainWidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    login *login1 = new login;
//    login1->show();
    MainWidget w;
    w.show();

    return a.exec();

}
