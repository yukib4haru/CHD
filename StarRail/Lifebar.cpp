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

void Lifebar::lifebarShortened(int nowhp,int maximumhp)
{
    this->setWidth(nowhp*getWidth()/maximumhp);
    this->setRect(barXSite,barYSite,width,10);
    qDebug()<<"血条变换血条变换血条变换血条变换"<<nowhp<<"  "<<maximumhp;
}
