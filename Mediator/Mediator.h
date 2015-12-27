#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <QString>

class Mediator;
class College
{
public:
    College();
    College(Mediator *mediator);
    virtual ~College(){}

    virtual void setState(const QString &state) = 0;
    virtual QString state() const = 0;

    virtual void doAction() = 0;

protected:
    Mediator *m_mediator;
};

class ConcreteCollegeA : public College
{
public:
    ConcreteCollegeA();
    ConcreteCollegeA(Mediator *mediator);
    ~ConcreteCollegeA(){}

    void setState(const QString &state);
    QString state() const;
    void doAction();

private:
    QString m_state;
};

class ConcreteCollegeB : public College
{
public:
    ConcreteCollegeB();
    ConcreteCollegeB(Mediator *mediator);
    ~ConcreteCollegeB(){}

    void setState(const QString &state);
    QString state() const;
    void doAction();

private:
    QString m_state;
};

class Mediator
{
public:
    Mediator();
    ~Mediator(){}

    virtual void doActionFromAToB() = 0;
    virtual void doActionFromBToA() = 0;
};

class ConcreteMediator : public Mediator
{
public:
    ConcreteMediator();
    ConcreteMediator(ConcreteCollegeA *collegeA, ConcreteCollegeB *collegeB);
    ~ConcreteMediator(){}

    void doActionFromAToB();
    void doActionFromBToA();

    void setCollegeA(ConcreteCollegeA *collegeA);
    void setCollegeB(ConcreteCollegeB *collegeB);

    ConcreteCollegeA* collegeA() const;
    ConcreteCollegeB* collegeB() const;

    void initCollege(ConcreteCollegeA *collegeA, ConcreteCollegeB *collegeB);

private:
    ConcreteCollegeA *m_collegeA;
    ConcreteCollegeB *m_collegeB;
};

#endif // MEDIATOR_H
