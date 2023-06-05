#include "Mainwindow.h"
<<<<<<< HEAD
#include "dialoglogin.h"
=======
>>>>>>> 467955446d0fa92a1d4dc5804647c6bee5277964
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //关联dialog和mainwindow
    DialogLogin *dialog = new DialogLogin;
    if(dialog->exec() == QDialog::Accepted)
    {
        MainWindow w;
        w.show();
        return a.exec();
    }
    return 0;
}
