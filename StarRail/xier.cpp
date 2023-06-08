#include "xier.h"
#include"star.h"

Xier::Xier():Hero("希尔",80,20,10,0,1,":/Image/xierQ1.png")
{
    this->setPixmap(QPixmap(":/Image/xier01.png"));   // 设置图像
    this->setPos(50,400);
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
