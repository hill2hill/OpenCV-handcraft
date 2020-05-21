#include "mainwindow.h"
#include "ui_mainwindow.h"

void testCopyOrigin(Ui::MainWindow* ui,
                    QPixmap* pPixmap,
                    QPixmap* pPixmapAfter)
{
    int width = ui->labOriginPic->width(), height = ui->labOriginPic->height();
    //picWidth = width, picHeight = height;
    QPixmap fitPixmap = pPixmap->scaled(width, height, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放

    //使用临时变量fitPixmap 进行图像的展示
    ui->labModified->setPixmap(fitPixmap);
}
