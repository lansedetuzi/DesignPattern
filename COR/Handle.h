#ifndef HANDLE_H
#define HANDLE_H

#include <QString>

class Handle
{
public:
    Handle();
    Handle(Handle *succ);
    virtual ~Handle();

    virtual void handleRequest() = 0;
    void setSuccessor(Handle *succ);
    Handle* successor() const;

private:
    Handle *m_succ;
};

class ConcreteHandleA : public Handle
{
public:
    ConcreteHandleA();
    ~ConcreteHandleA(){}

    void handleRequest();
};

class ConcreteHandleB : public Handle
{
public:
    ConcreteHandleB();
    ~ConcreteHandleB(){}

    void handleRequest();
};

#endif // HANDLE_H
