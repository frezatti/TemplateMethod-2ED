#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    try {
        ui->pushButton->hide();
       control = new Controler();
        ui->comboBoxOrder->setCurrentIndex(0);
        ui->pushButton->click();
    } catch (QString error) {
        QMessageBox::warning(this,"Error",error);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void loadTable( Professor array[],int size, Ui::MainWindow *ui){

    try {
    if(!array)throw QString("Deu merda");
    ui->tableWidget->clear();

    for(int j = ui->tableWidget->rowCount(); j>0;j--){
        ui->tableWidget->removeRow(j);
    }
    for(int i = 0;i<size;i++){
        ui->tableWidget->removeRow(i);
        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::number(array[i].getId())));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(array[i].getName()));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(array[i].getDepo()));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(array[i].getTitle()));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(array[i].getContractType()));
    }
    ui->tableWidget->resizeColumnsToContents();
    QStringList headers{"Matricula","Nome","Departamento","Titulacao","Tipo de Contrato"};
    ui->tableWidget->setHorizontalHeaderLabels(headers) ;
    ui->tableWidget->setColumnWidth(0,100);
    ui->tableWidget->setColumnWidth(1,300);
    ui->tableWidget->setColumnWidth(2,100);
    ui->tableWidget->setColumnWidth(3,120);
    ui->tableWidget->setColumnWidth(4,100);
    } catch (QString error) {
    }
}

void MainWindow::on_pushButton_clicked()
{
    try {
        loadTable(control->getArray(0),control->getSize(),ui);
    } catch (QString error) {
        QMessageBox::warning(this,"Error",error);
    }
}



void MainWindow::on_comboBoxSearch_activated(int index)
{
    try {
        Professor tmp;
        if(ui->lineEdit->text().isEmpty())throw QString("Escreva para fazer a pesquiza");
        switch (index) {
        case 0:
            tmp = control->sequentialSearchName(ui->lineEdit->text());
        break;
        case 1:
            tmp = control->sequentialSearchId(ui->lineEdit->text());
            break;
        case 2:
            tmp = control->BinaireSearchName(ui->lineEdit->text());
        break;
        case 3:
            tmp = control->BinaireSearchId(ui->lineEdit->text());
        break;
        default:
        loadTable(control->getArray(0),control->getSize(),ui);
        break;
        }
    for(int j = ui->tableWidget->rowCount(); j>0;j--){
        ui->tableWidget->removeRow(j);
    }
        ui->tableWidget->removeRow(0);
        ui->tableWidget->insertRow(0);
        ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString::number(tmp.getId())));
        ui->tableWidget->setItem(0,1,new QTableWidgetItem(tmp.getName()));
        ui->tableWidget->setItem(0,2,new QTableWidgetItem(tmp.getDepo()));
        ui->tableWidget->setItem(0,3,new QTableWidgetItem(tmp.getTitle()));
        ui->tableWidget->setItem(0,4,new QTableWidgetItem(tmp.getContractType()));

    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO",erro);
    }

}


void MainWindow::on_lineEdit_returnPressed()
{
    ui->comboBoxSearch->activated(ui->comboBoxSearch->currentIndex());
}


void MainWindow::on_comboBoxOrder_activated(int index)
{
    try {
        loadTable(control->getArray(index),control->getSize(),ui);
    } catch (QString error) {
        QMessageBox::warning(this,"Error",error);
    }

}

