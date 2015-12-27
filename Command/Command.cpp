#include "Command.h"

#include <QDebug>

Invoker::Invoker()
    : m_command(NULL)
{

}

Invoker::Invoker(Command *command)
    : m_command(command)
{

}

void Invoker::execute()
{
    if (m_command)
    {
        m_command->execute();
    }
    else
    {
        qDebug() << "you should define a command.";
    }
}

Command::Command()
{

}

ConcreteCommandA::ConcreteCommandA()
    : Command()
{
    m_receiverA = new ReceiverA();
}

void ConcreteCommandA::execute()
{
    m_receiverA->doAction();
}

Receiver::Receiver()
{

}

ReceiverA::ReceiverA()
    : Receiver()
{

}

void ReceiverA::doAction()
{
    qDebug() << "ReceiverA clean the garden.";
}
