#ifndef ABSTRACTION_H
#define ABSTRACTION_H

#include "AbstractionImp.h"

class Abstraction
{
public:
    Abstraction();
    ~Abstraction(){}

    virtual void operation() = 0;
};

class RefinedAbstraction : public Abstraction
{
public:
    RefinedAbstraction(AbstractionImp *abstractImp);
    ~RefinedAbstraction(){}

    void operation();

private:
    AbstractionImp *m_abstractImp;
};

#endif // ABSTRACTION_H
