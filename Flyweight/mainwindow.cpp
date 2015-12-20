#include "mainwindow.h"

#include "Flyweight.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    testFlyweight();
}

MainWindow::~MainWindow()
{

}

void MainWindow::testFlyweight()
{
    FlyweightFactory *pFlyweightFactory = new FlyweightFactory();
    Flyweight *pFlyweight1 = pFlyweightFactory->flyweight("You");
    Flyweight *pFlyweight2 = pFlyweightFactory->flyweight("are");
    Flyweight *pFlyweight3 = pFlyweightFactory->flyweight("my");
    Flyweight *pFlyweight4 = pFlyweightFactory->flyweight("destiny");

    Flyweight *pFlyweight5 = pFlyweightFactory->flyweight("destiny");
    pFlyweight1->operation("He");
    pFlyweight2->operation("is");
    pFlyweight3->operation("your");
}
