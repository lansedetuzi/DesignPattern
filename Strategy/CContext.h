#ifndef CCONTEXT_H
#define CCONTEXT_H

#include "IStrategy.h"

class CContext
{
public:
    explicit CContext();
    ~CContext();
    void operation();
    void setStrategy(IStrategy *strategy);

private:
    IStrategy *m_strategy;
};

#endif // CCONTEXT_H
