#include "State.h"

#include <QDebug>

State::State()
{
}

bool State::changeState(Context *con, State *state)
{
    return con->changeState(state);
}


ConcreteStateA::ConcreteStateA()
{

}

void ConcreteStateA::operation()
{
    qDebug() << "ConcreteStateA::operation";
}

void ConcreteStateA::operationChangeState(Context *con)
{
    operation();
    changeState(con, new ConcreteStateB());
    qDebug() << "change from A state to B state.";
}


ConcreteStateB::ConcreteStateB()
{

}

void ConcreteStateB::operation()
{
    qDebug() << "ConcreteStateB::operation";
}

void ConcreteStateB::operationChangeState(Context *con)
{
    operation();
    changeState(con, new ConcreteStateA);
    qDebug() << "change from B state to A state.";
}
