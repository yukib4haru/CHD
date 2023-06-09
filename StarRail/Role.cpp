#include "Role.h"
#include"star.h"

Role::Role(QString name1,int hp1,int att1,int speed1,int shield1)
{
    name=name1;
    hp=hp1;
    maximumHealth=hp1;
    att=att1;
    speed=speed1;
    shield=shield1;
    isAlive=1;
    lifebar = new Lifebar();
    lifebar->setBrush(QColor(255,0,0));
}

Role::~Role()
{

}

void Role::showBasicStatus()
{
    qDebug()<<"NAME:"<<name<<"\n";
    qDebug()<<"HP:"<<hp<<"\n";
    qDebug()<<"Shield:"<<shield<<"\n";
    qDebug()<<"isALive:"<<isAlive<<"\n";
}

void Role::beAttacked(int damage)
{
    if(shield>0)
    {
        int temp;
        temp=shield-damage;
        if(temp<0)
        {
            shield=0;
            hp += temp;
        }
        else
        {
            shield=temp;
        }
    }
    else
    {
        hp-=damage;

    }

    if(hp<=0)
    {
        if(isAlive==1)
        {
            isAlive=0;
            emit this->imKilled(this);
        }
    }
    qDebug()<<"挨打后\n";
    emit this->lifebarChangedSignal(getNowHealth(),getMaxiumHealth());
    showBasicStatus();
}

void Role::beCured(int health)
{
    hp+=health;
    if(hp>getMaxiumHealth())
    {
        hp=getMaxiumHealth();
    }
    qDebug()<<"被奶后\n";
    emit this->lifebarChangedSignal(getNowHealth(),getMaxiumHealth());
    showBasicStatus();
}

void Role::beGivenShieldBuff(int effect)
{
    shield+=effect;
}

void Role::setXSite(float xsite)
{
    xSite=xsite;
}

void Role::setYSite(float ysite)
{
    ySite=ysite;
}

void Role::setXSite0(float xsite0)
{
    xSite0=xsite0;
}

void Role::setYSite0(float ysite0)
{
    ySite0=ysite0;
}

void Role::setXMove(float xmove)
{
    xMove=xmove;
}

void Role::setYMove(float ymove)
{
    yMove=ymove;
}

void Role::setDistance(float moveDistanceX,float moveDistanceY)
{
    this->setXMove(moveDistanceX);
    this->setYMove(moveDistanceY);
}

void Role::moveTo()
{
    int x=this->getXSite()+this->getXMove();
    this->setXSite(x);
    int y=this->getYSite()+this->getYMove();
    this->setYSite(y);
    this->setPos(x,y);
    if(x>800)
    {
        emit this->moveOver();
        this->setPos(this->getXSite0(),this->getYSite0());
        this->setXSite(this->getXSite0());
        this->setYSite(this->getYSite0());
    }
}
