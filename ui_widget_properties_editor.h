/********************************************************************************
** Form generated from reading UI file 'widget_properties_editor.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_PROPERTIES_EDITOR_H
#define UI_WIDGET_PROPERTIES_EDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace Mayo {

class Ui_WidgetPropertiesEditor
{
public:
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stack_Browser;
    QWidget *page_BrowserDetails;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget_Browser;
    QWidget *page_BrowserEmpty;

    void setupUi(QWidget *Mayo__WidgetPropertiesEditor)
    {
        if (Mayo__WidgetPropertiesEditor->objectName().isEmpty())
            Mayo__WidgetPropertiesEditor->setObjectName(QStringLiteral("Mayo__WidgetPropertiesEditor"));
        Mayo__WidgetPropertiesEditor->resize(266, 171);
        verticalLayout_2 = new QVBoxLayout(Mayo__WidgetPropertiesEditor);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        stack_Browser = new QStackedWidget(Mayo__WidgetPropertiesEditor);
        stack_Browser->setObjectName(QStringLiteral("stack_Browser"));
        page_BrowserDetails = new QWidget();
        page_BrowserDetails->setObjectName(QStringLiteral("page_BrowserDetails"));
        verticalLayout = new QVBoxLayout(page_BrowserDetails);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        treeWidget_Browser = new QTreeWidget(page_BrowserDetails);
        treeWidget_Browser->setObjectName(QStringLiteral("treeWidget_Browser"));
        treeWidget_Browser->setEditTriggers(QAbstractItemView::CurrentChanged|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        treeWidget_Browser->header()->setVisible(false);

        verticalLayout->addWidget(treeWidget_Browser);

        stack_Browser->addWidget(page_BrowserDetails);
        page_BrowserEmpty = new QWidget();
        page_BrowserEmpty->setObjectName(QStringLiteral("page_BrowserEmpty"));
        stack_Browser->addWidget(page_BrowserEmpty);

        verticalLayout_2->addWidget(stack_Browser);


        retranslateUi(Mayo__WidgetPropertiesEditor);

        stack_Browser->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Mayo__WidgetPropertiesEditor);
    } // setupUi

    void retranslateUi(QWidget *Mayo__WidgetPropertiesEditor)
    {
        Mayo__WidgetPropertiesEditor->setWindowTitle(QApplication::translate("Mayo::WidgetPropertiesEditor", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_Browser->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("Mayo::WidgetPropertiesEditor", "Value", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("Mayo::WidgetPropertiesEditor", "Property", nullptr));
    } // retranslateUi

};

} // namespace Mayo

namespace Mayo {
namespace Ui {
    class WidgetPropertiesEditor: public Ui_WidgetPropertiesEditor {};
} // namespace Ui
} // namespace Mayo

#endif // UI_WIDGET_PROPERTIES_EDITOR_H
