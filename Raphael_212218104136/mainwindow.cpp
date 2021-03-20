#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QDebug>
#include<QFileDialog>
#include<QString>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Raphael 4136","Do you want to submit the form?",QMessageBox::Ok|QMessageBox::Cancel);
    if(reply==QMessageBox::Ok)
    {
        QMessageBox::information(this,"Raphael 4136","Submitted successfully!");
    }
    if(reply==QMessageBox::Cancel)
    {
        qDebug()<<"Nothing is submitted..";
    }
}



void MainWindow::on_pushButton_2_clicked()
{
    QString picpath=QFileDialog::getOpenFileName(this,tr("Open file"),"C://","PDF File(*.pdf)");

}
