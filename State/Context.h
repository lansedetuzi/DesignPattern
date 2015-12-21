#ifndef CONTEXT_H
#define CONTEXT_H

#include "State.h"

class State;
class Context
{
public:
    Context();
    Context(State *state);
    ~Context(){}

    void operation();
    void operationChangeState();

protected:
    bool changeState(State *state);

private:
    State *m_state;
    friend class State;
};

#endif // CONTEXT_H
