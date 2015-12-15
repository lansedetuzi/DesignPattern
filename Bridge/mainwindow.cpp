#include "mainwindow.h"

#include "Abstraction.h"
#include "AbstractionImp.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    testBridge();
}

MainWindow::~MainWindow()
{

}

void MainWindow::testBridge()
{
    AbstractionImp *pAbsImp1 = new ConcreteAbstractionImpA();
    AbstractionImp *pAbsImp2 = new ConcreteAbstractionImpB();

    Abstraction *pAbs1 = new RefinedAbstraction(pAbsImp1);
    pAbs1->operation();

    Abstraction *pAbs2 = new RefinedAbstraction(pAbsImp2);
    pAbs2->operation();
}
