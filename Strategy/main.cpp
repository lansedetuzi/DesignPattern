#include <iostream>

#include "CContext.h"
#include "CStrategy.h"

using std::cout;
using std::endl;

int main()
{
    CContext *context = new CContext;

    cout << "see Grandpa Qiao, open the first package:" << endl;
    context->setStrategy(new CBackDoor());
    context->operation();

    cout << "Liu Bei enjoy himself, open the second package:" << endl;

    context->setStrategy(new CGivenGreenLight());
    context->operation();

    cout << "Facing Sun's soldiers, open the last package:" << endl;
    context->setStrategy(new CBlockEnemy());
    context->operation();

    delete context;
    context = nullptr;

    return 0;
}

