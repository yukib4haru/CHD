#include "Xing.h"
#include"star.h"

Xing::Xing():Hero("星",100,15,5,1)
{
    this->/*image.*/setPixmap(QPixmap(":/Image/Xing.png"));   // 设置图像

}

Xing::~Xing()
{

}

void Xing::skillA()
{
    qDebug()<<"释放A技能"<<endl;
}
void Xing::skillB()
{

}
void Xing::skillC()
{

}



