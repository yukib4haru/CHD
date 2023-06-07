#ifndef MANAGER_H
#define MANAGER_H

#include"star.h"

class Manager
{
public:
    virtual void init()= 0;
    virtual void update()= 0;
};

#endif // MANAGER_H
