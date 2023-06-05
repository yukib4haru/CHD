#ifndef JIACHONG_H
#define JIACHONG_H

#include"Enemy.h"
#include"star.h"

class Jiachong : public Enemy
{
public:
    Jiachong();
    void skill(Role* p);
};

#endif // JIACHONG_H
