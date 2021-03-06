/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widget_file_system.h"
#include "widget_model_tree.h"
#include "widget_properties_editor.h"

namespace Mayo {

class Ui_MainWindow
{
public:
    QAction *actionNewDoc;
    QAction *actionImport;
    QAction *actionQuit;
    QAction *actionOpen;
    QAction *actionAboutMayo;
    QAction *actionReportBug;
    QAction *actionOptions;
    QAction *actionSaveImageView;
    QAction *actionExportSelectedItems;
    QAction *actionInspectXDE;
    QAction *actionPreviousDoc;
    QAction *actionNextDoc;
    QAction *actionCloseDoc;
    QAction *actionToggleFullscreen;
    QAction *actionToggleLeftSidebar;
    QAction *actionRecentFiles;
    QAction *actionToggleOriginTrihedron;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionCloseAllDocuments;
    QAction *actionCloseAllExcept;
    QAction *actionProjectionPerspective;
    QAction *actionProjectionOrthographic;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *stack_Main;
    QWidget *page_MainHome;
    QVBoxLayout *verticalLayout_8;
    QWidget *widget_MainHome;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_AppIcon;
    QLabel *label_MainHome;
    QWidget *page_MainControl;
    QVBoxLayout *verticalLayout_7;
    QSplitter *splitter_Main;
    QWidget *widget_Left;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_LeftContents;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_LeftHeader;
    QHBoxLayout *Layout_WidgetLeftHeader;
    QComboBox *combo_LeftContents;
    QFrame *line_SeparatorComboLeftContents;
    QToolButton *btn_CloseLeftSideBar;
    QStackedWidget *stack_LeftContents;
    QWidget *page_ModelTree;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter_ModelTree;
    WidgetModelTree *widget_ModelTree;
    WidgetPropertiesEditor *widget_Properties;
    QWidget *page_OpenedDocuments;
    QVBoxLayout *verticalLayout_6;
    QListView *listView_OpenedDocuments;
    QWidget *page_FileSystem;
    QVBoxLayout *verticalLayout_3;
    WidgetFileSystem *widget_FileSystem;
    QWidget *widget_Right;
    QVBoxLayout *verticalLayout;
    QWidget *widget_ControlGuiDocuments;
    QHBoxLayout *horizontalLayout;
    QToolButton *btn_PreviousGuiDocument;
    QToolButton *btn_NextGuiDocument;
    QComboBox *combo_GuiDocuments;
    QFrame *line;
    QToolButton *btn_CloseGuiDocument;
    QFrame *line_2;
    QWidget *widget_Spacer;
    QWidget *widget_MouseCoords;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_PosX;
    QLabel *label_ValuePosX;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_PosY;
    QLabel *label_ValuePosY;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_PosZ;
    QLabel *label_ValuePosZ;
    QStackedWidget *stack_GuiDocuments;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_Help;
    QMenu *menu_Options;
    QMenu *menu_Window;
    QMenu *menu_Display;
    QMenu *menu_Projection;

    void setupUi(QMainWindow *Mayo__MainWindow)
    {
        if (Mayo__MainWindow->objectName().isEmpty())
            Mayo__MainWindow->setObjectName(QStringLiteral("Mayo__MainWindow"));
        Mayo__MainWindow->resize(764, 572);
        actionNewDoc = new QAction(Mayo__MainWindow);
        actionNewDoc->setObjectName(QStringLiteral("actionNewDoc"));
        actionImport = new QAction(Mayo__MainWindow);
        actionImport->setObjectName(QStringLiteral("actionImport"));
        actionQuit = new QAction(Mayo__MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionOpen = new QAction(Mayo__MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionAboutMayo = new QAction(Mayo__MainWindow);
        actionAboutMayo->setObjectName(QStringLiteral("actionAboutMayo"));
        actionReportBug = new QAction(Mayo__MainWindow);
        actionReportBug->setObjectName(QStringLiteral("actionReportBug"));
        actionOptions = new QAction(Mayo__MainWindow);
        actionOptions->setObjectName(QStringLiteral("actionOptions"));
        actionSaveImageView = new QAction(Mayo__MainWindow);
        actionSaveImageView->setObjectName(QStringLiteral("actionSaveImageView"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/classic/camera_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveImageView->setIcon(icon);
        actionExportSelectedItems = new QAction(Mayo__MainWindow);
        actionExportSelectedItems->setObjectName(QStringLiteral("actionExportSelectedItems"));
        actionInspectXDE = new QAction(Mayo__MainWindow);
        actionInspectXDE->setObjectName(QStringLiteral("actionInspectXDE"));
        actionPreviousDoc = new QAction(Mayo__MainWindow);
        actionPreviousDoc->setObjectName(QStringLiteral("actionPreviousDoc"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreviousDoc->setIcon(icon1);
        actionNextDoc = new QAction(Mayo__MainWindow);
        actionNextDoc->setObjectName(QStringLiteral("actionNextDoc"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNextDoc->setIcon(icon2);
        actionCloseDoc = new QAction(Mayo__MainWindow);
        actionCloseDoc->setObjectName(QStringLiteral("actionCloseDoc"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCloseDoc->setIcon(icon3);
        actionToggleFullscreen = new QAction(Mayo__MainWindow);
        actionToggleFullscreen->setObjectName(QStringLiteral("actionToggleFullscreen"));
        actionToggleFullscreen->setCheckable(true);
        actionToggleLeftSidebar = new QAction(Mayo__MainWindow);
        actionToggleLeftSidebar->setObjectName(QStringLiteral("actionToggleLeftSidebar"));
        actionToggleLeftSidebar->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/classic/left-sidebar_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionToggleLeftSidebar->setIcon(icon4);
        actionRecentFiles = new QAction(Mayo__MainWindow);
        actionRecentFiles->setObjectName(QStringLiteral("actionRecentFiles"));
        actionToggleOriginTrihedron = new QAction(Mayo__MainWindow);
        actionToggleOriginTrihedron->setObjectName(QStringLiteral("actionToggleOriginTrihedron"));
        actionToggleOriginTrihedron->setCheckable(true);
        actionZoomIn = new QAction(Mayo__MainWindow);
        actionZoomIn->setObjectName(QStringLiteral("actionZoomIn"));
        actionZoomOut = new QAction(Mayo__MainWindow);
        actionZoomOut->setObjectName(QStringLiteral("actionZoomOut"));
        actionCloseAllDocuments = new QAction(Mayo__MainWindow);
        actionCloseAllDocuments->setObjectName(QStringLiteral("actionCloseAllDocuments"));
        actionCloseAllExcept = new QAction(Mayo__MainWindow);
        actionCloseAllExcept->setObjectName(QStringLiteral("actionCloseAllExcept"));
        actionProjectionPerspective = new QAction(Mayo__MainWindow);
        actionProjectionPerspective->setObjectName(QStringLiteral("actionProjectionPerspective"));
        actionProjectionPerspective->setCheckable(true);
        actionProjectionOrthographic = new QAction(Mayo__MainWindow);
        actionProjectionOrthographic->setObjectName(QStringLiteral("actionProjectionOrthographic"));
        actionProjectionOrthographic->setCheckable(true);
        centralWidget = new QWidget(Mayo__MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        stack_Main = new QStackedWidget(centralWidget);
        stack_Main->setObjectName(QStringLiteral("stack_Main"));
        page_MainHome = new QWidget();
        page_MainHome->setObjectName(QStringLiteral("page_MainHome"));
        verticalLayout_8 = new QVBoxLayout(page_MainHome);
        verticalLayout_8->setSpacing(20);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        widget_MainHome = new QWidget(page_MainHome);
        widget_MainHome->setObjectName(QStringLiteral("widget_MainHome"));
        verticalLayout_9 = new QVBoxLayout(widget_MainHome);
        verticalLayout_9->setSpacing(20);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_AppIcon = new QLabel(widget_MainHome);
        label_AppIcon->setObjectName(QStringLiteral("label_AppIcon"));
        label_AppIcon->setPixmap(QPixmap(QString::fromUtf8(":/images/appicon_128.png")));
        label_AppIcon->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_9->addWidget(label_AppIcon);

        label_MainHome = new QLabel(widget_MainHome);
        label_MainHome->setObjectName(QStringLiteral("label_MainHome"));
        label_MainHome->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_9->addWidget(label_MainHome);


        verticalLayout_8->addWidget(widget_MainHome);

        stack_Main->addWidget(page_MainHome);
        page_MainControl = new QWidget();
        page_MainControl->setObjectName(QStringLiteral("page_MainControl"));
        verticalLayout_7 = new QVBoxLayout(page_MainControl);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        splitter_Main = new QSplitter(page_MainControl);
        splitter_Main->setObjectName(QStringLiteral("splitter_Main"));
        splitter_Main->setOrientation(Qt::Horizontal);
        splitter_Main->setChildrenCollapsible(false);
        widget_Left = new QWidget(splitter_Main);
        widget_Left->setObjectName(QStringLiteral("widget_Left"));
        horizontalLayout_3 = new QHBoxLayout(widget_Left);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_LeftContents = new QWidget(widget_Left);
        widget_LeftContents->setObjectName(QStringLiteral("widget_LeftContents"));
        verticalLayout_5 = new QVBoxLayout(widget_LeftContents);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_LeftHeader = new QWidget(widget_LeftContents);
        widget_LeftHeader->setObjectName(QStringLiteral("widget_LeftHeader"));
        Layout_WidgetLeftHeader = new QHBoxLayout(widget_LeftHeader);
        Layout_WidgetLeftHeader->setSpacing(1);
        Layout_WidgetLeftHeader->setContentsMargins(11, 11, 11, 11);
        Layout_WidgetLeftHeader->setObjectName(QStringLiteral("Layout_WidgetLeftHeader"));
        Layout_WidgetLeftHeader->setContentsMargins(0, 0, 4, 0);
        combo_LeftContents = new QComboBox(widget_LeftHeader);
        combo_LeftContents->addItem(QString());
        combo_LeftContents->addItem(QString());
        combo_LeftContents->addItem(QString());
        combo_LeftContents->setObjectName(QStringLiteral("combo_LeftContents"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(combo_LeftContents->sizePolicy().hasHeightForWidth());
        combo_LeftContents->setSizePolicy(sizePolicy);
        combo_LeftContents->setMinimumSize(QSize(0, 22));

        Layout_WidgetLeftHeader->addWidget(combo_LeftContents);

        line_SeparatorComboLeftContents = new QFrame(widget_LeftHeader);
        line_SeparatorComboLeftContents->setObjectName(QStringLiteral("line_SeparatorComboLeftContents"));
        line_SeparatorComboLeftContents->setFrameShadow(QFrame::Plain);
        line_SeparatorComboLeftContents->setFrameShape(QFrame::VLine);

        Layout_WidgetLeftHeader->addWidget(line_SeparatorComboLeftContents);

        btn_CloseLeftSideBar = new QToolButton(widget_LeftHeader);
        btn_CloseLeftSideBar->setObjectName(QStringLiteral("btn_CloseLeftSideBar"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/classic/left-arrow-cross_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_CloseLeftSideBar->setIcon(icon5);
        btn_CloseLeftSideBar->setAutoRaise(true);

        Layout_WidgetLeftHeader->addWidget(btn_CloseLeftSideBar);


        verticalLayout_5->addWidget(widget_LeftHeader);

        stack_LeftContents = new QStackedWidget(widget_LeftContents);
        stack_LeftContents->setObjectName(QStringLiteral("stack_LeftContents"));
        page_ModelTree = new QWidget();
        page_ModelTree->setObjectName(QStringLiteral("page_ModelTree"));
        verticalLayout_2 = new QVBoxLayout(page_ModelTree);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        splitter_ModelTree = new QSplitter(page_ModelTree);
        splitter_ModelTree->setObjectName(QStringLiteral("splitter_ModelTree"));
        splitter_ModelTree->setOrientation(Qt::Vertical);
        widget_ModelTree = new WidgetModelTree(splitter_ModelTree);
        widget_ModelTree->setObjectName(QStringLiteral("widget_ModelTree"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(widget_ModelTree->sizePolicy().hasHeightForWidth());
        widget_ModelTree->setSizePolicy(sizePolicy1);
        splitter_ModelTree->addWidget(widget_ModelTree);
        widget_Properties = new WidgetPropertiesEditor(splitter_ModelTree);
        widget_Properties->setObjectName(QStringLiteral("widget_Properties"));
        splitter_ModelTree->addWidget(widget_Properties);

        verticalLayout_2->addWidget(splitter_ModelTree);

        stack_LeftContents->addWidget(page_ModelTree);
        page_OpenedDocuments = new QWidget();
        page_OpenedDocuments->setObjectName(QStringLiteral("page_OpenedDocuments"));
        verticalLayout_6 = new QVBoxLayout(page_OpenedDocuments);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        listView_OpenedDocuments = new QListView(page_OpenedDocuments);
        listView_OpenedDocuments->setObjectName(QStringLiteral("listView_OpenedDocuments"));
        listView_OpenedDocuments->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listView_OpenedDocuments->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listView_OpenedDocuments->setTextElideMode(Qt::ElideMiddle);

        verticalLayout_6->addWidget(listView_OpenedDocuments);

        stack_LeftContents->addWidget(page_OpenedDocuments);
        page_FileSystem = new QWidget();
        page_FileSystem->setObjectName(QStringLiteral("page_FileSystem"));
        verticalLayout_3 = new QVBoxLayout(page_FileSystem);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_FileSystem = new WidgetFileSystem(page_FileSystem);
        widget_FileSystem->setObjectName(QStringLiteral("widget_FileSystem"));

        verticalLayout_3->addWidget(widget_FileSystem);

        stack_LeftContents->addWidget(page_FileSystem);

        verticalLayout_5->addWidget(stack_LeftContents);


        horizontalLayout_3->addWidget(widget_LeftContents);

        splitter_Main->addWidget(widget_Left);
        widget_Right = new QWidget(splitter_Main);
        widget_Right->setObjectName(QStringLiteral("widget_Right"));
        verticalLayout = new QVBoxLayout(widget_Right);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, 0, 0, 1);
        widget_ControlGuiDocuments = new QWidget(widget_Right);
        widget_ControlGuiDocuments->setObjectName(QStringLiteral("widget_ControlGuiDocuments"));
        horizontalLayout = new QHBoxLayout(widget_ControlGuiDocuments);
        horizontalLayout->setSpacing(1);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 0, 0, 0);
        btn_PreviousGuiDocument = new QToolButton(widget_ControlGuiDocuments);
        btn_PreviousGuiDocument->setObjectName(QStringLiteral("btn_PreviousGuiDocument"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/themes/classic/back_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_PreviousGuiDocument->setIcon(icon6);
        btn_PreviousGuiDocument->setIconSize(QSize(12, 12));
        btn_PreviousGuiDocument->setAutoRaise(true);

        horizontalLayout->addWidget(btn_PreviousGuiDocument);

        btn_NextGuiDocument = new QToolButton(widget_ControlGuiDocuments);
        btn_NextGuiDocument->setObjectName(QStringLiteral("btn_NextGuiDocument"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/themes/classic/next_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_NextGuiDocument->setIcon(icon7);
        btn_NextGuiDocument->setIconSize(QSize(12, 12));
        btn_NextGuiDocument->setAutoRaise(true);

        horizontalLayout->addWidget(btn_NextGuiDocument);

        combo_GuiDocuments = new QComboBox(widget_ControlGuiDocuments);
        combo_GuiDocuments->setObjectName(QStringLiteral("combo_GuiDocuments"));
        combo_GuiDocuments->setMinimumSize(QSize(0, 22));
        combo_GuiDocuments->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(combo_GuiDocuments);

        line = new QFrame(widget_ControlGuiDocuments);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::VLine);

        horizontalLayout->addWidget(line);

        btn_CloseGuiDocument = new QToolButton(widget_ControlGuiDocuments);
        btn_CloseGuiDocument->setObjectName(QStringLiteral("btn_CloseGuiDocument"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/themes/classic/cross_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_CloseGuiDocument->setIcon(icon8);
        btn_CloseGuiDocument->setIconSize(QSize(12, 12));
        btn_CloseGuiDocument->setAutoRaise(true);

        horizontalLayout->addWidget(btn_CloseGuiDocument);

        line_2 = new QFrame(widget_ControlGuiDocuments);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::VLine);

        horizontalLayout->addWidget(line_2);

        widget_Spacer = new QWidget(widget_ControlGuiDocuments);
        widget_Spacer->setObjectName(QStringLiteral("widget_Spacer"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_Spacer->sizePolicy().hasHeightForWidth());
        widget_Spacer->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(widget_Spacer);

        widget_MouseCoords = new QWidget(widget_ControlGuiDocuments);
        widget_MouseCoords->setObjectName(QStringLiteral("widget_MouseCoords"));
        horizontalLayout_7 = new QHBoxLayout(widget_MouseCoords);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_PosX = new QLabel(widget_MouseCoords);
        label_PosX->setObjectName(QStringLiteral("label_PosX"));

        horizontalLayout_4->addWidget(label_PosX);

        label_ValuePosX = new QLabel(widget_MouseCoords);
        label_ValuePosX->setObjectName(QStringLiteral("label_ValuePosX"));

        horizontalLayout_4->addWidget(label_ValuePosX);


        horizontalLayout_7->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_PosY = new QLabel(widget_MouseCoords);
        label_PosY->setObjectName(QStringLiteral("label_PosY"));

        horizontalLayout_5->addWidget(label_PosY);

        label_ValuePosY = new QLabel(widget_MouseCoords);
        label_ValuePosY->setObjectName(QStringLiteral("label_ValuePosY"));

        horizontalLayout_5->addWidget(label_ValuePosY);


        horizontalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_PosZ = new QLabel(widget_MouseCoords);
        label_PosZ->setObjectName(QStringLiteral("label_PosZ"));

        horizontalLayout_6->addWidget(label_PosZ);

        label_ValuePosZ = new QLabel(widget_MouseCoords);
        label_ValuePosZ->setObjectName(QStringLiteral("label_ValuePosZ"));

        horizontalLayout_6->addWidget(label_ValuePosZ);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        horizontalLayout->addWidget(widget_MouseCoords);


        verticalLayout->addWidget(widget_ControlGuiDocuments);

        stack_GuiDocuments = new QStackedWidget(widget_Right);
        stack_GuiDocuments->setObjectName(QStringLiteral("stack_GuiDocuments"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(stack_GuiDocuments->sizePolicy().hasHeightForWidth());
        stack_GuiDocuments->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(stack_GuiDocuments);

        splitter_Main->addWidget(widget_Right);

        verticalLayout_7->addWidget(splitter_Main);

        stack_Main->addWidget(page_MainControl);

        verticalLayout_4->addWidget(stack_Main);

        Mayo__MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Mayo__MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 764, 21));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QStringLiteral("menu_Help"));
        menu_Options = new QMenu(menuBar);
        menu_Options->setObjectName(QStringLiteral("menu_Options"));
        menu_Window = new QMenu(menuBar);
        menu_Window->setObjectName(QStringLiteral("menu_Window"));
        menu_Display = new QMenu(menuBar);
        menu_Display->setObjectName(QStringLiteral("menu_Display"));
        menu_Projection = new QMenu(menu_Display);
        menu_Projection->setObjectName(QStringLiteral("menu_Projection"));
        Mayo__MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_Display->menuAction());
        menuBar->addAction(menu_Options->menuAction());
        menuBar->addAction(menu_Window->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_File->addAction(actionNewDoc);
        menu_File->addAction(actionOpen);
        menu_File->addAction(actionRecentFiles);
        menu_File->addSeparator();
        menu_File->addAction(actionImport);
        menu_File->addAction(actionExportSelectedItems);
        menu_File->addSeparator();
        menu_File->addAction(actionCloseDoc);
        menu_File->addAction(actionCloseAllDocuments);
        menu_File->addAction(actionCloseAllExcept);
        menu_File->addSeparator();
        menu_File->addAction(actionQuit);
        menu_Help->addAction(actionReportBug);
        menu_Help->addSeparator();
        menu_Help->addAction(actionAboutMayo);
        menu_Options->addAction(actionSaveImageView);
        menu_Options->addAction(actionInspectXDE);
        menu_Options->addSeparator();
        menu_Options->addAction(actionOptions);
        menu_Window->addAction(actionToggleFullscreen);
        menu_Window->addAction(actionToggleLeftSidebar);
        menu_Window->addSeparator();
        menu_Window->addAction(actionPreviousDoc);
        menu_Window->addAction(actionNextDoc);
        menu_Display->addAction(menu_Projection->menuAction());
        menu_Display->addAction(actionToggleOriginTrihedron);
        menu_Display->addSeparator();
        menu_Display->addAction(actionZoomIn);
        menu_Display->addAction(actionZoomOut);
        menu_Projection->addAction(actionProjectionOrthographic);
        menu_Projection->addAction(actionProjectionPerspective);

        retranslateUi(Mayo__MainWindow);

        stack_Main->setCurrentIndex(1);
        stack_LeftContents->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Mayo__MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *Mayo__MainWindow)
    {
        Mayo__MainWindow->setWindowTitle(QApplication::translate("Mayo::MainWindow", "Mayo", nullptr));
        actionNewDoc->setText(QApplication::translate("Mayo::MainWindow", "New", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNewDoc->setShortcut(QApplication::translate("Mayo::MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionImport->setText(QApplication::translate("Mayo::MainWindow", "Import", nullptr));
        actionQuit->setText(QApplication::translate("Mayo::MainWindow", "Quit", nullptr));
        actionOpen->setText(QApplication::translate("Mayo::MainWindow", "Open", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("Mayo::MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionAboutMayo->setText(QApplication::translate("Mayo::MainWindow", "About Mayo", nullptr));
        actionReportBug->setText(QApplication::translate("Mayo::MainWindow", "Report Bug", nullptr));
        actionOptions->setText(QApplication::translate("Mayo::MainWindow", "Options", nullptr));
        actionSaveImageView->setText(QApplication::translate("Mayo::MainWindow", "Save View to Image", nullptr));
        actionExportSelectedItems->setText(QApplication::translate("Mayo::MainWindow", "Export selected items", nullptr));
        actionInspectXDE->setText(QApplication::translate("Mayo::MainWindow", "Inspect XDE", nullptr));
        actionPreviousDoc->setText(QApplication::translate("Mayo::MainWindow", "Previous Document", nullptr));
#ifndef QT_NO_TOOLTIP
        actionPreviousDoc->setToolTip(QApplication::translate("Mayo::MainWindow", "Previous Document", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionPreviousDoc->setShortcut(QApplication::translate("Mayo::MainWindow", "Alt+Left", nullptr));
#endif // QT_NO_SHORTCUT
        actionNextDoc->setText(QApplication::translate("Mayo::MainWindow", "Next Document", nullptr));
#ifndef QT_NO_TOOLTIP
        actionNextDoc->setToolTip(QApplication::translate("Mayo::MainWindow", "Next Document", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionNextDoc->setShortcut(QApplication::translate("Mayo::MainWindow", "Alt+Right", nullptr));
#endif // QT_NO_SHORTCUT
        actionCloseDoc->setText(QApplication::translate("Mayo::MainWindow", "Close \"%1\"", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCloseDoc->setShortcut(QApplication::translate("Mayo::MainWindow", "Ctrl+W", nullptr));
#endif // QT_NO_SHORTCUT
        actionToggleFullscreen->setText(QApplication::translate("Mayo::MainWindow", "Fullscreen", nullptr));
#ifndef QT_NO_TOOLTIP
        actionToggleFullscreen->setToolTip(QApplication::translate("Mayo::MainWindow", "Switch Fullscreen/Normal", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionToggleFullscreen->setShortcut(QApplication::translate("Mayo::MainWindow", "F11", nullptr));
#endif // QT_NO_SHORTCUT
        actionToggleLeftSidebar->setText(QApplication::translate("Mayo::MainWindow", "Show Left Sidebar", nullptr));
#ifndef QT_NO_TOOLTIP
        actionToggleLeftSidebar->setToolTip(QApplication::translate("Mayo::MainWindow", "Show/Hide Left Sidebar", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionToggleLeftSidebar->setShortcut(QApplication::translate("Mayo::MainWindow", "Alt+0", nullptr));
#endif // QT_NO_SHORTCUT
        actionRecentFiles->setText(QApplication::translate("Mayo::MainWindow", "Recent files", nullptr));
        actionToggleOriginTrihedron->setText(QApplication::translate("Mayo::MainWindow", "Show Origin Trihedron", nullptr));
#ifndef QT_NO_TOOLTIP
        actionToggleOriginTrihedron->setToolTip(QApplication::translate("Mayo::MainWindow", "Show/Hide Origin Trihedron", nullptr));
#endif // QT_NO_TOOLTIP
        actionZoomIn->setText(QApplication::translate("Mayo::MainWindow", "Zoom In", nullptr));
#ifndef QT_NO_SHORTCUT
        actionZoomIn->setShortcut(QApplication::translate("Mayo::MainWindow", "Ctrl++", nullptr));
#endif // QT_NO_SHORTCUT
        actionZoomOut->setText(QApplication::translate("Mayo::MainWindow", "Zoom Out", nullptr));
#ifndef QT_NO_SHORTCUT
        actionZoomOut->setShortcut(QApplication::translate("Mayo::MainWindow", "Ctrl+-", nullptr));
#endif // QT_NO_SHORTCUT
        actionCloseAllDocuments->setText(QApplication::translate("Mayo::MainWindow", "Close all", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCloseAllDocuments->setShortcut(QApplication::translate("Mayo::MainWindow", "Ctrl+Shift+W", nullptr));
#endif // QT_NO_SHORTCUT
        actionCloseAllExcept->setText(QApplication::translate("Mayo::MainWindow", "Close all except \"%1\"", nullptr));
        actionProjectionPerspective->setText(QApplication::translate("Mayo::MainWindow", "Perspective", nullptr));
        actionProjectionOrthographic->setText(QApplication::translate("Mayo::MainWindow", "Orthographic", nullptr));
        label_AppIcon->setText(QString());
        label_MainHome->setText(QApplication::translate("Mayo::MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">You can create a </span><a href=\"NewDocument\"><span style=\" font-size:10pt; text-decoration: underline; color:#0000ff;\">New Document</span></a></p><p><span style=\" font-size:10pt;\">or </span><a href=\"OpenDocuments\"><span style=\" font-size:10pt; text-decoration: underline; color:#0000ff;\">Open Existing Documents</span></a></p></body></html>", nullptr));
        combo_LeftContents->setItemText(0, QApplication::translate("Mayo::MainWindow", "Model tree", nullptr));
        combo_LeftContents->setItemText(1, QApplication::translate("Mayo::MainWindow", "Opened documents", nullptr));
        combo_LeftContents->setItemText(2, QApplication::translate("Mayo::MainWindow", "File system", nullptr));

#ifndef QT_NO_TOOLTIP
        btn_CloseLeftSideBar->setToolTip(QApplication::translate("Mayo::MainWindow", "Close Left Side Bar", nullptr));
#endif // QT_NO_TOOLTIP
        label_PosX->setText(QApplication::translate("Mayo::MainWindow", "X=", nullptr));
        label_ValuePosX->setText(QApplication::translate("Mayo::MainWindow", "?", nullptr));
        label_PosY->setText(QApplication::translate("Mayo::MainWindow", "Y=", nullptr));
        label_ValuePosY->setText(QApplication::translate("Mayo::MainWindow", "?", nullptr));
        label_PosZ->setText(QApplication::translate("Mayo::MainWindow", "Z=", nullptr));
        label_ValuePosZ->setText(QApplication::translate("Mayo::MainWindow", "?", nullptr));
        menu_File->setTitle(QApplication::translate("Mayo::MainWindow", "&File", nullptr));
        menu_Help->setTitle(QApplication::translate("Mayo::MainWindow", "&Help", nullptr));
        menu_Options->setTitle(QApplication::translate("Mayo::MainWindow", "&Tools", nullptr));
        menu_Window->setTitle(QApplication::translate("Mayo::MainWindow", "&Window", nullptr));
        menu_Display->setTitle(QApplication::translate("Mayo::MainWindow", "&Display", nullptr));
        menu_Projection->setTitle(QApplication::translate("Mayo::MainWindow", "Projection", nullptr));
    } // retranslateUi

};

} // namespace Mayo

namespace Mayo {
namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui
} // namespace Mayo

#endif // UI_MAINWINDOW_H
