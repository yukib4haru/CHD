#include "Xing.h"
#include"star.h"

Xing::Xing():Hero("星",100,15,7,0,2,":/Image/XingQ0.png")
{
    this->setPixmap(QPixmap(":/Image/Xing.png"));   // 设置图像
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



