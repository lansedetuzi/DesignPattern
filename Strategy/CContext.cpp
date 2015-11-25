#include "CContext.h"

CContext::CContext()
{
}

CContext::~CContext()
{
    delete m_strategy;
    m_strategy = nullptr;
}

void CContext::operation()
{
    m_strategy->operation();
}

void CContext::setStrategy(IStrategy *strategy)
{
    m_strategy = strategy;
}
