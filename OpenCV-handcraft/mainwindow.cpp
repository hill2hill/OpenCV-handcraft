#include <QFileDialog>

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "handcraft_Algorithms.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    //delete pPixmap;
    //delete pPixmapAfter;
    delete ui;
}


void MainWindow::on_btnSelectPic_clicked()
{
    picName =
    QFileDialog::getOpenFileName(this,
                                 tr("请选择图片"),
                                 "",
                                 tr("Images (*.png *.bmp *.jpg *.tif *.GIF)"));
    //先清空结果框内的结果


    if(picName.isEmpty())
    {
        return ;
    }
    else
    {
        //通过picName路径创建pPixmap
        pPixmap = new QPixmap(picName);

        //根据显示框大小显示图像 并保持原有的图像比例
        int width = ui->labOriginPic->width(), height = ui->labOriginPic->height();
        picWidth = width, picHeight = height;
        QPixmap fitPixmap = pPixmap->scaled(picWidth, picHeight, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放

        //使用临时变量fitPixmap 进行图像的展示
        ui->labOriginPic->setPixmap(fitPixmap);
    }
}

void MainWindow::on_btnApplyAlgorithm_clicked()
{
    pPixmapAfter = new QPixmap(picName);
    algorithmIndex = ui->comBoxAlgorithmIndex->currentIndex();
    switch(algorithmIndex)
    {
        case(3): testCopyOrigin(ui, pPixmap, pPixmapAfter);
    }

}
