#include "AdapterC.h"

#include <QDebug>

TargetC::TargetC()
{

}

void TargetC::request()
{
    qDebug() << "TargetC::request";
}

AdapteeC::AdapteeC()
{

}

void AdapteeC::specialRequest()
{
    qDebug() << "AdapteeC::specialRequest";
}

AdapterC::AdapterC(AdapteeC *adapteeC)
{
    m_adapteeC = adapteeC;
}

AdapterC::~AdapterC()
{
    if (m_adapteeC)
    {
        delete m_adapteeC;
        m_adapteeC = nullptr;
    }
}

void AdapterC::request()
{
    m_adapteeC->specialRequest();
}
