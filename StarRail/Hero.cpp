#include "Hero.h"

Hero::Hero(string name1,int hp1,int att1,int speed1,int label1):Role(name1,hp1,att1,speed1)
{
    label=label1;
    shield=0;
}

