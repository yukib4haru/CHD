#include "Natasha.h"
#include"star.h"

Natasha::Natasha():Hero("娜塔莎",90,10,3,0,3,":/Image/XingQ0.png")
{
    this->setPixmap(QPixmap(":/Image/Natasha01.png"));   // 设置图像
    this->setPos(500,-50);
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
