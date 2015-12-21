#include "mainwindow.h"

#include "State.h"
#include "Context.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    testState();
}

MainWindow::~MainWindow()
{

}

void MainWindow::testState()
{
    State *pStateA = new ConcreteStateA();
    State *pStateB = new ConcreteStateB();
    Context *pContext1 = new Context(pStateA);
    pContext1->operationChangeState();

    Context *pContext2 = new Context(pStateB);
    pContext2->operationChangeState();
}
