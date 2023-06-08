#include "Jiachong.h"

//(string name1,int hp1,int att1,int speed1)

Jiachong::Jiachong():Enemy("甲虫",50,10,5,10)
{
    this->setPixmap(QPixmap(":/Image/jiachong0.png"));
    this->setPos(1000,200);
}

void Jiachong::skill()
{

}
