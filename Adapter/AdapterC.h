#ifndef ADAPTERC_H
#define ADAPTERC_H

/***********************************************
 * Adapter pattern implement by composition
 * **********************************************/

class TargetC
{
public:
    TargetC();
    ~TargetC(){}

    virtual void request();
};

class AdapteeC
{
public:
    AdapteeC();
    ~AdapteeC(){}

    void specialRequest();
};

class AdapterC : public TargetC
{
public:
    AdapterC(AdapteeC *adapteeC);
    ~AdapterC();

    void request();

private:
    AdapteeC *m_adapteeC;
};

#endif // ADAPTERC_H
