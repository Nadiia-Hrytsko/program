#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog1.h"
#include "dialog2.h"
#include "dialog3.h"
#include "dialog4.h"
#include "dialog5.h"

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

void MainWindow::on_pushButton_3_clicked()
{
    Dialog1 window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    Dialog2 window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_pushButton_clicked()
{
    Dialog3 window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    Dialog4 window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_pushButton_5_clicked()
{
    Dialog5 window;
    window.setModal(true);
    window.exec();
}
