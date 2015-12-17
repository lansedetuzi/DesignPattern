#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    /**
     * @brief testAdapterE
     *      ����ͨ���̳з�ʽʵ�ֵ�������ģʽ
     */
    void testAdapterE();

    /**
     * @brief testAdapterC
     *      ����ͨ�����ģʽʵ�ֵ�������ģʽ
     */
    void testAdapterC();
};

#endif // MAINWINDOW_H
