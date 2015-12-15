#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Builder.h"

class Director
{
public:
    Director(Builder *builder);
    ~Director(){}
    void construct();
    Product * pruduct();

private:
    Builder *m_builder;
};

#endif // DIRECTOR_H
