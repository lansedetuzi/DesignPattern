#ifndef PROTOTYPE_H
#define PROTOTYPE_H


class Prototype
{
public:
    Prototype();
    ~Prototype(){}

    virtual Prototype* clone() = 0;
};

class ConcretePrototype : public Prototype
{
public:
    ConcretePrototype();
    ~ConcretePrototype(){}

    ConcretePrototype(const ConcretePrototype &concretePrototype);

    Prototype* clone();
};

#endif // PROTOTYPE_H
