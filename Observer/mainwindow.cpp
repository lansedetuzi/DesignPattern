#include "mainwindow.h"

#include "Observer.h"
#include "Subject.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    testObserver();
}

MainWindow::~MainWindow()
{

}

void MainWindow::testObserver()
{
    Subject *pSubject = new ConcreteSubject();

    Observer *pObserverA = new ConcreteObserverA(pSubject);
    Observer *pObserverB = new ConcreteObserverB(pSubject);

    pSubject->setState("A lot of jobs have been published.");
    pSubject->notify();

    pSubject->setState("The chance is over.");
    pSubject->notify();
}
