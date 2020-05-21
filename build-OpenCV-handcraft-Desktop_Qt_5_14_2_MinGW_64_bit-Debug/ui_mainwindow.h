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
#include <QtWidgets/QFrame>
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
    QComboBox *comBoxAlgorithmIndex;
    QPushButton *btnApplyAlgorithm;
    QPushButton *btnSave;
    QLabel *labOriginPic;
    QLabel *labModified;
    QFrame *line;
    QMenuBar *menubar;
    QMenu *menuOpenCV_handcraft;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(551, 396);
        actionsingle_PIC = new QAction(MainWindow);
        actionsingle_PIC->setObjectName(QString::fromUtf8("actionsingle_PIC"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnSelectPic = new QPushButton(centralwidget);
        btnSelectPic->setObjectName(QString::fromUtf8("btnSelectPic"));
        btnSelectPic->setGeometry(QRect(50, 20, 75, 23));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(180, 10, 151, 51));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        comBoxAlgorithmIndex = new QComboBox(verticalLayoutWidget);
        comBoxAlgorithmIndex->addItem(QString());
        comBoxAlgorithmIndex->addItem(QString());
        comBoxAlgorithmIndex->addItem(QString());
        comBoxAlgorithmIndex->addItem(QString());
        comBoxAlgorithmIndex->setObjectName(QString::fromUtf8("comBoxAlgorithmIndex"));

        verticalLayout->addWidget(comBoxAlgorithmIndex);

        btnApplyAlgorithm = new QPushButton(centralwidget);
        btnApplyAlgorithm->setObjectName(QString::fromUtf8("btnApplyAlgorithm"));
        btnApplyAlgorithm->setGeometry(QRect(410, 20, 75, 23));
        btnSave = new QPushButton(centralwidget);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(420, 310, 75, 23));
        labOriginPic = new QLabel(centralwidget);
        labOriginPic->setObjectName(QString::fromUtf8("labOriginPic"));
        labOriginPic->setGeometry(QRect(30, 80, 201, 201));
        labModified = new QLabel(centralwidget);
        labModified->setObjectName(QString::fromUtf8("labModified"));
        labModified->setGeometry(QRect(310, 80, 201, 201));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(260, 100, 16, 171));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 551, 23));
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
        comBoxAlgorithmIndex->setItemText(0, QCoreApplication::translate("MainWindow", "test_\345\244\215\345\210\266\345\216\237\345\233\276", nullptr));
        comBoxAlgorithmIndex->setItemText(1, QCoreApplication::translate("MainWindow", "\346\234\200\350\277\221\351\202\273\345\206\205\346\217\222\346\263\225", nullptr));
        comBoxAlgorithmIndex->setItemText(2, QCoreApplication::translate("MainWindow", "\345\217\214\347\272\277\346\200\247\345\206\205\346\217\222\346\263\225", nullptr));
        comBoxAlgorithmIndex->setItemText(3, QCoreApplication::translate("MainWindow", "\345\217\214\344\270\211\346\254\241\345\206\205\346\217\222\346\263\225", nullptr));

        btnApplyAlgorithm->setText(QCoreApplication::translate("MainWindow", "\345\272\224\347\224\250\347\256\227\346\263\225", nullptr));
        btnSave->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\260\345\233\276\347\211\207", nullptr));
        labOriginPic->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\345\276\205\345\244\204\347\220\206\345\233\276\345\203\217</p></body></html>", nullptr));
        labModified->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\345\244\204\347\220\206\345\220\216\345\233\276\345\203\217</p></body></html>", nullptr));
        menuOpenCV_handcraft->setTitle(QCoreApplication::translate("MainWindow", "\347\256\227\346\263\225\346\250\241\345\274\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
