#include "Role.h"
#include"star.h"

Role::Role(QString name1,int hp1,int att1,int speed1)
{
    name=name1;
    hp=hp1;
    att=att1;
    speed=speed1;
    isAlive=1;
}

Role::~Role()
{

}

void Role::showBasicStatus()
{
    qDebug()<<"NAME:"<<name<<"\n";
    qDebug()<<"HP:"<<hp<<"\n";

}
