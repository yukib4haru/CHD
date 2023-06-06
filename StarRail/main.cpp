#include "Mainwindow.h"
#include "login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

        login *login1 = new login;
        login1->show();


}
