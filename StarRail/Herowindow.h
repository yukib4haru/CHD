#ifndef HEROWINDOW_H
#define HEROWINDOW_H
#include<star.h>
#include<Hero.h>
#include<Mainwindow.h>

class Herowindow : public MainWindow
{
public:
    Herowindow();

private:
    QPushButton* skillAbtn;
    QPushButton* skillBbtn;
    QPushButton* skillCbtn;
};

#endif // HEROWINDOW_H
