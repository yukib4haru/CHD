#include "Movetimer.h"

MoveTimer::MoveTimer()
{

}

MoveTimer::~MoveTimer()
{

}

void MoveTimer::beTriggeredStart()
{
    this->start(30);
}

void MoveTimer::beTriggeredStop()
{
    this->stop();
}
