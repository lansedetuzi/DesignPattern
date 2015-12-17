#ifndef ADAPTERE_H
#define ADAPTERE_H

/***********************************************
 * Adapter pattern implement by extending
 * **********************************************/

class TargetE
{
public:
    TargetE();
    ~TargetE(){}

    virtual void request();
};

class Adaptee
{
public:
    Adaptee();
    ~Adaptee(){}

    void specialRequest();
};

class AdapterE : public TargetE ,private Adaptee
{
public:
    AdapterE();
    ~AdapterE(){}

    void request();

};

#endif // ADAPTERE_H
