#include "Director.h"

Director::Director(Builder *builder)
{
    m_builder = builder;
}

void Director::construct()
{
    m_builder->buildPartA("A");
    m_builder->buildPartB("B");
    m_builder->buildPartC("C");
}

Product *Director::pruduct()
{
    return m_builder->product();
}

