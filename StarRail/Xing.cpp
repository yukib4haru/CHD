#include "Xing.h"
#include"star.h"

Xing::Xing():Hero("星",100,15,5,0,1)
{
    this->setPixmap(QPixmap(":/Image/Xing.png"));   // 设置图像
    this->setPos(100,100);
}

Xing::~Xing()
{

}

void Xing::skillA()
{
    qDebug()<<"释放A技能\n";
    emit this->skillAdamage(getAtt());
}

void Xing::skillB()
{
    qDebug()<<"释放B技能\n";
    emit this->skillBbuff(getAtt());
}

void Xing::skillC()
{

}



