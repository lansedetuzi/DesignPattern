#ifndef ABSTRACTIONIMP_H
#define ABSTRACTIONIMP_H


class AbstractionImp
{
public:
    AbstractionImp();
    virtual ~AbstractionImp(){}

    virtual void operation() = 0;
};

class ConcreteAbstractionImpA : public AbstractionImp
{
public:
    ConcreteAbstractionImpA();
    ~ConcreteAbstractionImpA(){}

    void operation();
};

class ConcreteAbstractionImpB : public AbstractionImp
{
public:
    ConcreteAbstractionImpB();
    ~ConcreteAbstractionImpB(){}

    void operation();
};


#endif // ABSTRACTIONIMP_H
