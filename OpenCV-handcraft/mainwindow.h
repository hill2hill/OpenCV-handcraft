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

private:
    Ui::MainWindow *ui;
    QPixmap *pPixmap; //待处理图像
    QPixmap *pPixmapAfter; //处理后图像
};
#endif // MAINWINDOW_H
