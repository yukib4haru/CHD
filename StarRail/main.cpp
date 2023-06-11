#include "loginvedio0.h"
#include "ui_loginvedio0.h"

#include "login.h"

#include "loginvedio1.h"
#include "ui_loginvedio1.h"

#include "loginvedio2.h"
#include "ui_loginvedio2.h"

#include"MainWidget.h"

#include <QApplication>
#include "player.h"
#include "ui_player.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    LoginVedio0 loginlogin0;
    loginlogin0.show();

//    login *login1 = new login;
//    login1->show();

//    player *player1 = new player;
//    player1->show();

//    MainWidget w;
//    w.show();

    return a.exec();


}
