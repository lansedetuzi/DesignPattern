#include "mainwindow.h"

#include "Command.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    testCommand();
}

MainWindow::~MainWindow()
{

}

void MainWindow::testCommand()
{
    Command *pCommand = new ConcreteCommandA(); // ִ�����Ѿ���װ������Ĺ��캯����
    Invoker *pInvoker = new Invoker(/*pCommand*/);
    pInvoker->execute();
}
