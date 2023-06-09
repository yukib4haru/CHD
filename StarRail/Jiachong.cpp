#include "Jiachong.h"

//(string name1,int hp1,int att1,int speed1)

Jiachong::Jiachong():Enemy("甲虫",100,100,5,10,0,"")
{
    this->setPixmap(QPixmap(":/Image/jiachong0.png"));
    this->setPos(1000,200);
}

void Jiachong::skill()
{

}
