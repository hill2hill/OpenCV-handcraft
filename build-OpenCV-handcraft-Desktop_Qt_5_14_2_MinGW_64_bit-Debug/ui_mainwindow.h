/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionsingle_PIC;
    QWidget *centralwidget;
    QPushButton *btnSelectPic;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *btnApplyAlgorithm;
    QMenuBar *menubar;
    QMenu *menuOpenCV_handcraft;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(537, 326);
        actionsingle_PIC = new QAction(MainWindow);
        actionsingle_PIC->setObjectName(QString::fromUtf8("actionsingle_PIC"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnSelectPic = new QPushButton(centralwidget);
        btnSelectPic->setObjectName(QString::fromUtf8("btnSelectPic"));
        btnSelectPic->setGeometry(QRect(10, 10, 75, 23));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(180, 10, 151, 51));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout->addWidget(comboBox);

        btnApplyAlgorithm = new QPushButton(centralwidget);
        btnApplyAlgorithm->setObjectName(QString::fromUtf8("btnApplyAlgorithm"));
        btnApplyAlgorithm->setGeometry(QRect(400, 10, 75, 23));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 537, 23));
        menuOpenCV_handcraft = new QMenu(menubar);
        menuOpenCV_handcraft->setObjectName(QString::fromUtf8("menuOpenCV_handcraft"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuOpenCV_handcraft->menuAction());
        menuOpenCV_handcraft->addAction(actionsingle_PIC);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionsingle_PIC->setText(QCoreApplication::translate("MainWindow", "single PIC", nullptr));
        btnSelectPic->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\345\233\276\347\211\207", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Select Algorithm</p></body></html>", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\347\256\227\346\263\2251", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\347\256\227\346\263\2252", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\347\256\227\346\263\2253", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "\347\256\227\346\263\2254", nullptr));

        btnApplyAlgorithm->setText(QCoreApplication::translate("MainWindow", "\345\272\224\347\224\250\347\256\227\346\263\225", nullptr));
        menuOpenCV_handcraft->setTitle(QCoreApplication::translate("MainWindow", "OpenCV-handcraft", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
