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

    shieldbar = new Lifebar();
    shieldbar->setBrush(QColor(0,0,255));
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
        isAlive=0;
    }
    qDebug()<<"挨打后\n";
    emit lifebarShortenedSignal(getNowHealth(),getMaxiumHealth());

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

void Role::setXMove(float xmove)
{
    xMove=xmove;
}

void Role::setYMove(float ymove)
{
    yMove=ymove;
}
