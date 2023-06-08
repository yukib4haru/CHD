#include "Xing.h"
#include"star.h"

Xing::Xing():Hero("星",100,15,7,0/*,1*/)
{
    this->setPixmap(QPixmap(":/Image/Xing.png"));   // 设置图像
    this->setXSite(50);
    this->setYSite(-50);
    this->setPos(this->getXSite(),this->getYSite());
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

void Xing::moveTo()
{
    int x=this->getXSite()+this->getXMove();
    this->setXSite(x);
    int y=this->getYSite()+this->getYMove();
    this->setYSite(y);
    this->setPos(x,y);
    if(x>800)
    {
        emit this->moveOver();
        this->setXSite(50);
        this->setYSite(-50);
        this->setPos(this->getXSite(),this->getYSite());
    }
}

void Xing::setDistance(float moveDistanceX,float moveDistanceY)
{
    this->setXMove(moveDistanceX);
    this->setYMove(moveDistanceY);
}
