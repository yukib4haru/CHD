#include "Xing.h"
#include"star.h"

Xing::Xing():Hero("星",100,15,7,0/*,1*/)
{
    this->setPixmap(QPixmap(":/Image/Xing.png"));   // 设置图像
    this->setXSite0(50);
    this->setYSite0(-50);
    this->setXSite(50);
    this->setYSite(-50);
    this->setPos(this->getXSite(),this->getYSite());

    this->lifebar->setWidth(400);
    this->lifebar->setBarXSite(getXSite()+100);
    this->lifebar->setBarYSite(getYSite()+100);
    this->lifebar->setRect(lifebar->getBarXSite(),lifebar->getBarYSite(),lifebar->getWidth(),10);
    this->setPos(50,-50);
}

Xing::~Xing()
{

}

void Xing::skillA()
{
    qDebug()<<"星释放A技能\n";
    emit this->skillAdamage(getAtt());
}

void Xing::skillB()
{
    qDebug()<<"星释放B技能\n";
    emit this->skillBbuff(getAtt());
}

void Xing::skillC()
{

}

