#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::close);

    connect(ui->pushButton_2, &QPushButton::clicked, [&]() {
        ui->label_2->setText(ui->lineEdit_2->text());
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
