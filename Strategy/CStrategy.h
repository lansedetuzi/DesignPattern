#ifndef CSTRATEGY_H
#define CSTRATEGY_H

#include "IStrategy.h"

class CBackDoor : public IStrategy
{
public:
    CBackDoor();
    ~CBackDoor(){}

    void operation();
};

class CGivenGreenLight : public IStrategy
{
public:
    CGivenGreenLight();
    ~CGivenGreenLight(){}

    void operation();
};

class CBlockEnemy : public IStrategy
{
public:
    CBlockEnemy();
    ~CBlockEnemy(){}

    void operation();
};
#endif // CSTRATEGY_H
