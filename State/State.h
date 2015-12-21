#ifndef STATE_H
#define STATE_H

#include "Context.h"

class Context;
class State
{
public:
    State();
    virtual ~State(){}

    virtual void operation() = 0;
    virtual void operationChangeState(Context *con) = 0;

protected:
    bool changeState(Context *con, State *state);
};

class ConcreteStateA : public State
{
public:
    ConcreteStateA();
    ~ConcreteStateA(){}

    virtual void operation();
    virtual void operationChangeState(Context *con);
};

class ConcreteStateB : public State
{
public:
    ConcreteStateB();
    ~ConcreteStateB(){}

    virtual void operation();
    virtual void operationChangeState(Context *con);
};

#endif // STATE_H
