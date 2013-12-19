#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "qcolordialogbutton.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->colorPalette, SIGNAL(colorChanged(QColor)), this, SLOT(updateColorLabel(QColor)));
    connect(ui->colorInput,SIGNAL(textChanged(QString)), ui->colorPalette, SLOT(setColorHex(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateColorLabel(QColor color)
{
    ui->colorLabel->setText(color.name());
}
