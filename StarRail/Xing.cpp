#include "Xing.h"
#include"star.h"

Xing::Xing():Hero("星",100,15,5,1)
{
    QPixmap pix("Xing.png");   // Xing的图像
    this->setPixmap(pix);           // 设置图像
    setScale(2);              // 设置尺寸为2倍大小
}

void Xing::skillA(Role* p)
{

}
void Xing::skillB(Role* p)
{

}
void Xing::skillC(Role* p)
{

}


