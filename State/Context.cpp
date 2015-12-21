#include "Context.h"

Context::Context()
{
}

Context::Context(State *state)
{
    m_state = state;
}

void Context::operation()
{
    m_state->operation();
}

void Context::operationChangeState()
{
    m_state->operationChangeState(this);
}

bool Context::changeState(State *state)
{
    if (m_state == state)
    {
        return false;
    }
    m_state = state;
    return true;
}
