#include "login.h"
#include "player.h"
#include "ui_player.h"
#include"MainWidget.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


//    login *login1 = new login;
//    login1->show();
    player *player1 = new player;
    player1->show();

    return a.exec();

}
