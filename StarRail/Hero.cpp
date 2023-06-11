#include "Hero.h"

Hero::Hero(QString name1,int hp1,int att1,int speed1,int shield1/*,int label1*/):Role(name1,hp1,att1,speed1,shield1)
{
//    label=label1;
}

void Hero::beMovedJiachong()
{
    float moveDistanceX0;
    float moveDistanceY0;
    float x10=1000;
    float y10=200;
    float x20=getXSite0();
    float y20=getYSite0();
    moveDistanceX0=(x20-x10)/30;
    moveDistanceY0=(y20-y10)/30;
    emit this->getValueJiachong(moveDistanceX0,moveDistanceY0,x10,y10,x20,y20);
}
