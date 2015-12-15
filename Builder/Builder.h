#ifndef BUILDER_H
#define BUILDER_H

#include <QString>

class Product
{
public:
    Product();
    ~Product(){}
};

class Builder
{
public:
    ~Builder(){}

    virtual void buildPartA(const QString &partA) = 0;
    virtual void buildPartB(const QString &partB) = 0;
    virtual void buildPartC(const QString &partC) = 0;

    virtual Product* product() = 0;

    Builder();
protected:
};

class ConcreteBuilder : public Builder
{
public:
    ConcreteBuilder();
    ~ConcreteBuilder(){}

    void buildPartA(const QString &partA);
    void buildPartB(const QString &partB);
    void buildPartC(const QString &partC);

    Product* product();
};

#endif // BUILDER_H
