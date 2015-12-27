#ifndef COMMAND_H
#define COMMAND_H

class Command;
class Invoker
{
public:
    Invoker();
    Invoker(Command *command);
    ~Invoker(){}

    void execute();

private:
    Command *m_command;
};

class Command
{
public:
    Command();
    ~Command(){}

    virtual void execute() = 0;
};

class ReceiverA;
class ConcreteCommandA : public Command
{
public:
    ConcreteCommandA();
    ~ConcreteCommandA(){}

    void execute();

private:
    ReceiverA *m_receiverA;
};

class Receiver
{
public:
    Receiver();
    virtual ~Receiver(){}

    virtual void doAction() = 0;
};

class ReceiverA : public Receiver
{
public:
    ReceiverA();
    ~ReceiverA(){}

    void doAction();
};

#endif // COMMAND_H
