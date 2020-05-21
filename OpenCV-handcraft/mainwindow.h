#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_btnSelectPic_clicked();

    void on_btnApplyAlgorithm_clicked();

private:
    Ui::MainWindow *ui;
    QString picName; //原始图像路径
    QPixmap *pPixmap; //待处理图像
    QPixmap *pPixmapAfter; //处理后图像
    int picWidth, picHeight; //图像长宽
    int algorithmIndex; //被选择算法的索引
};
#endif // MAINWINDOW_H
