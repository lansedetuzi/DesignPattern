#include "CStrategy.h"

#include <iostream>

using std::cout;
using std::endl;

CBackDoor::CBackDoor()
{
    cout << "create backDoor strategy." << endl;
}

void CBackDoor::operation()
{
    cout << "ask grandpa Qiao to put pressures on Sun Quan." << endl;
}


CGivenGreenLight::CGivenGreenLight()
{
    cout << "create givenGreenLight strategy." << endl;
}

void CGivenGreenLight::operation()
{
    cout << "ask Grandma Wu to give greenlight." << endl;
}


CBlockEnemy::CBlockEnemy()
{
    cout << "create blockEnemy stategy." << endl;
}

void CBlockEnemy::operation()
{
    cout << "ask Sun Shangxiang to prevent enemies." << endl;
}
