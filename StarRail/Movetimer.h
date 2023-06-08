#ifndef MOVETIMER_H
#define MOVETIMER_H

#include <QTimer>

class MoveTimer : public QTimer
{
    Q_OBJECT
public:
    MoveTimer();
    ~MoveTimer();
public slots:
    void beTriggeredStart();
signals:

};

#endif // MOVETIMER_H
