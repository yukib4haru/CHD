#include "xier.h"
#include"star.h"

Xier::Xier():Hero("希尔",80,20,10,0/*,1*/)
{
    this->setPixmap(QPixmap(":/Image/xier01.png"));   // 设置图像
    this->setXSite0(50);
    this->setYSite0(400);
    this->setXSite(50);
    this->setYSite(400);
    this->setPos(50,400);

    this->lifebar->setWidth(400);
    this->lifebar->setBarXSite(getXSite()+100);
    this->lifebar->setBarYSite(getYSite());
    this->lifebar->setRect(lifebar->getBarXSite(),lifebar->getBarYSite(),lifebar->getWidth(),10);
}

Xier::~Xier()
{

}

void Xier::skillA()
{
    qDebug()<<"希尔释放A技能\n";
    emit this->skillAdamage(getAtt());
}

void Xier::skillB()
{
    qDebug()<<"希尔释放B技能\n";
    emit this->skillBdamage(2*getAtt());
}

void Xier::skillC()
{

}
