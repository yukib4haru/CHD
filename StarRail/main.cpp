#include "dialoglogin.h"
#include"MainWidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //关联dialog和mainwindow
    DialogLogin *dialog = new DialogLogin;
    if(dialog->exec() == QDialog::Accepted)
    {
        MainWidget x;
    	x.show();
    	return a.exec();
    }
    return 0;
}
