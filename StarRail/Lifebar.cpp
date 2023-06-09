#include "Lifebar.h"

Lifebar::Lifebar()
{

}

Lifebar::~Lifebar()
{

}

void Lifebar::setWidth(int w)
{
    width=w;
}

void Lifebar::setBarXSite(float x)
{
    barXSite=x;
}
void Lifebar::setBarYSite(float y)
{
    barYSite=y;
}

void Lifebar::lifebarchanged(int nowhp,int maximumhp)
{
    int nowWidth;
    nowWidth=(nowhp*getWidth()/maximumhp);
    if(nowhp>0)
    {
        this->setRect(barXSite,barYSite,nowWidth,10);
        qDebug()<<"血条变换血条变换血条变换血条变换\n"<<"当前生命值为："<<nowhp<<"  最大生命值为："<<maximumhp<<"\n";
    }
    else
    {
        this->hide();
        qDebug()<<"受击对象已死亡";
    }
}
