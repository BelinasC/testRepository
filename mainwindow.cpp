#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QObject>
#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    signalMapperButtons = new QSignalMapper(this);
    connect(signalMapperButtons, SIGNAL(mapped(int)), this, SLOT(on_pushButton_clicked(int)));

    signalMapperButtons->setMapping(ui->pushButton_1,1);
    connect(ui->pushButton_1, SIGNAL(clicked(bool)), signalMapperButtons, SLOT(map()));

    signalMapperButtons->setMapping(ui->pushButton_2,2);
    connect(ui->pushButton_2, SIGNAL(clicked(bool)), signalMapperButtons, SLOT(map()));



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked(int idButton)
{
   qDebug() << "ID-ul butonului este :" <<idButton<<endl;
}
