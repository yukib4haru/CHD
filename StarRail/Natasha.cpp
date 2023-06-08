#include "Natasha.h"
#include"star.h"

Natasha::Natasha():Hero("娜塔莎",90,10,5,0,1)
{
    this->setPixmap(QPixmap(":/Image/Natasha01.png"));   // 设置图像
    this->setXSite(500);
    this->setYSite(-50);
    this->setPos(500,-50);

    this->lifebar->setWidth(300);
    this->lifebar->setBarXSite(getXSite()+170);
    this->lifebar->setBarYSite(getYSite()+100);
    this->lifebar->setRect(lifebar->getBarXSite(),lifebar->getBarYSite(),lifebar->getWidth(),10);
}

Natasha::~Natasha()
{

}

void Natasha::skillA()
{
    qDebug()<<"娜塔莎释放A技能\n";
    emit this->skillAdamage(getAtt());
}

void Natasha::skillB()
{
    qDebug()<<"娜塔莎释放B技能\n";
    emit this->skillBcure(getAtt());
}

void Natasha::skillC()
{

}
