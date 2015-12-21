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

    bool changeState(Context *con, State *state);
};

class ConcreteStateA : public State
{
public:
    ConcreteStateA();
    ~ConcreteStateA(){}

    void operation();
    void operationChangeState(Context *con);
};

class ConcreteStateB : public State
{
public:
    ConcreteStateB();
    ~ConcreteStateB(){}

    void operation();
    void operationChangeState(Context *con);
};

#endif // STATE_H
