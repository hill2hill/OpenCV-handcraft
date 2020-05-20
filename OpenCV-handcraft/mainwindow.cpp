#include <QFileDialog>

#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_btnSelectPic_clicked()
{
    QString picName =
    QFileDialog::getOpenFileName(this,
                                 tr("请选择图片"),
                                 "",
                                 tr("Images (*.png *.bmp *.jpg *.tif *.GIF)"));
    if(picName.isEmpty())
    {
        return ;
    }
    else
    {
        if()

            else {
            {

            }
        }
    }

}
