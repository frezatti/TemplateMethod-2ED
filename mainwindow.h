#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMessageBox>
#include"controler.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();


    void on_comboBoxSearch_activated(int index);

    void on_lineEdit_returnPressed();

    void on_comboBoxOrder_activated(int index);

private:
    Ui::MainWindow *ui;
    Controler* control;
};
#endif // MAINWINDOW_H
