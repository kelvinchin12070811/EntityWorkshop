/********************************************************************************
** Form generated from reading UI file 'EntityWorkshop.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTITYWORKSHOP_H
#define UI_ENTITYWORKSHOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EntityWorkshopClass
{
public:
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTreeWidget *documentView;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *EntityWorkshopClass)
    {
        if (EntityWorkshopClass->objectName().isEmpty())
            EntityWorkshopClass->setObjectName(QStringLiteral("EntityWorkshopClass"));
        EntityWorkshopClass->resize(600, 400);
        actionQuit = new QAction(EntityWorkshopClass);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionAbout = new QAction(EntityWorkshopClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_Qt = new QAction(EntityWorkshopClass);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        centralWidget = new QWidget(EntityWorkshopClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        documentView = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        documentView->setHeaderItem(__qtreewidgetitem);
        documentView->setObjectName(QStringLiteral("documentView"));
        documentView->setFrameShape(QFrame::NoFrame);
        documentView->setAlternatingRowColors(true);
        documentView->setHeaderHidden(true);
        documentView->setColumnCount(1);
        documentView->header()->setVisible(false);
        documentView->header()->setCascadingSectionResizes(false);

        verticalLayout->addWidget(documentView);

        EntityWorkshopClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(EntityWorkshopClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        EntityWorkshopClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(EntityWorkshopClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        EntityWorkshopClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(EntityWorkshopClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        EntityWorkshopClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_Qt);

        retranslateUi(EntityWorkshopClass);
        QObject::connect(actionQuit, SIGNAL(triggered()), EntityWorkshopClass, SLOT(close()));

        QMetaObject::connectSlotsByName(EntityWorkshopClass);
    } // setupUi

    void retranslateUi(QMainWindow *EntityWorkshopClass)
    {
        EntityWorkshopClass->setWindowTitle(QApplication::translate("EntityWorkshopClass", "EntityWorkshop", nullptr));
        actionQuit->setText(QApplication::translate("EntityWorkshopClass", "Quit", nullptr));
        actionAbout->setText(QApplication::translate("EntityWorkshopClass", "About", nullptr));
        actionAbout_Qt->setText(QApplication::translate("EntityWorkshopClass", "About Qt", nullptr));
        menuFile->setTitle(QApplication::translate("EntityWorkshopClass", "File", nullptr));
        menuHelp->setTitle(QApplication::translate("EntityWorkshopClass", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EntityWorkshopClass: public Ui_EntityWorkshopClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTITYWORKSHOP_H
