#include "Jiachong.h"

//(string name1,int hp1,int att1,int speed1)

Jiachong::Jiachong():Enemy("甲虫",50,10,5,10,0,"")
{
    this->setPixmap(QPixmap(":/Image/jiachong0.png"));
    this->setXSite(1000);
    this->setYSite(200);
    this->setPos(getXSite(),getYSite());

    this->lifebar->setWidth(320);
    this->lifebar->setBarXSite(getXSite());
    this->lifebar->setBarYSite(getYSite());
    this->lifebar->setRect(lifebar->getBarXSite(),lifebar->getBarYSite(),320,10);
}

void Jiachong::beMoved()
{
    float moveDistanceX0;
    float moveDistanceY0;
    float x10=50;
    float y10=-50;
    float x20=1000;
    float y20=200;
    moveDistanceX0=(x20-x10)/30;
    moveDistanceY0=(y20-y10)/30;
    emit this->getValueXing(moveDistanceX0,moveDistanceY0,x10,y10,x20,y20);
}

void Jiachong::skill()
{

}
