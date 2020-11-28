/********************************************************************************
** Form generated from reading UI file 'widget_clip_planes.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_CLIP_PLANES_H
#define UI_WIDGET_CLIP_PLANES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

namespace Mayo {

class Ui_WidgetClipPlanes
{
public:
    QGridLayout *gridLayout_2;
    QCheckBox *check_X;
    QWidget *widget_X;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *spin_XPos;
    QSlider *slider_XPos;
    QToolButton *btn_XInv;
    QCheckBox *check_Y;
    QWidget *widget_Y;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *spin_YPos;
    QSlider *slider_YPos;
    QToolButton *btn_YInv;
    QCheckBox *check_Z;
    QWidget *widget_Z;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *spin_ZPos;
    QSlider *slider_ZPos;
    QToolButton *btn_ZInv;
    QCheckBox *check_Custom;
    QWidget *widget_Custom;
    QGridLayout *gridLayout;
    QToolButton *btn_CustomInv;
    QDoubleSpinBox *spin_CustomPos;
    QSlider *slider_CustomPos;
    QWidget *widget_CustomDir;
    QHBoxLayout *horizontalLayout_5;
    QDoubleSpinBox *spin_CustomDirX;
    QDoubleSpinBox *spin_CustomDirY;
    QDoubleSpinBox *spin_CustomDirZ;

    void setupUi(QWidget *Mayo__WidgetClipPlanes)
    {
        if (Mayo__WidgetClipPlanes->objectName().isEmpty())
            Mayo__WidgetClipPlanes->setObjectName(QStringLiteral("Mayo__WidgetClipPlanes"));
        Mayo__WidgetClipPlanes->resize(249, 112);
        gridLayout_2 = new QGridLayout(Mayo__WidgetClipPlanes);
        gridLayout_2->setSpacing(2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(2, 2, 2, 2);
        check_X = new QCheckBox(Mayo__WidgetClipPlanes);
        check_X->setObjectName(QStringLiteral("check_X"));

        gridLayout_2->addWidget(check_X, 0, 0, 1, 1);

        widget_X = new QWidget(Mayo__WidgetClipPlanes);
        widget_X->setObjectName(QStringLiteral("widget_X"));
        horizontalLayout = new QHBoxLayout(widget_X);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        spin_XPos = new QDoubleSpinBox(widget_X);
        spin_XPos->setObjectName(QStringLiteral("spin_XPos"));
        spin_XPos->setMaximum(0);

        horizontalLayout->addWidget(spin_XPos);

        slider_XPos = new QSlider(widget_X);
        slider_XPos->setObjectName(QStringLiteral("slider_XPos"));
        slider_XPos->setMaximum(100);
        slider_XPos->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(slider_XPos);

        btn_XInv = new QToolButton(widget_X);
        btn_XInv->setObjectName(QStringLiteral("btn_XInv"));

        horizontalLayout->addWidget(btn_XInv);


        gridLayout_2->addWidget(widget_X, 0, 1, 1, 1);

        check_Y = new QCheckBox(Mayo__WidgetClipPlanes);
        check_Y->setObjectName(QStringLiteral("check_Y"));

        gridLayout_2->addWidget(check_Y, 1, 0, 1, 1);

        widget_Y = new QWidget(Mayo__WidgetClipPlanes);
        widget_Y->setObjectName(QStringLiteral("widget_Y"));
        horizontalLayout_2 = new QHBoxLayout(widget_Y);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        spin_YPos = new QDoubleSpinBox(widget_Y);
        spin_YPos->setObjectName(QStringLiteral("spin_YPos"));
        spin_YPos->setMaximum(0);

        horizontalLayout_2->addWidget(spin_YPos);

        slider_YPos = new QSlider(widget_Y);
        slider_YPos->setObjectName(QStringLiteral("slider_YPos"));
        slider_YPos->setMaximum(100);
        slider_YPos->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(slider_YPos);

        btn_YInv = new QToolButton(widget_Y);
        btn_YInv->setObjectName(QStringLiteral("btn_YInv"));

        horizontalLayout_2->addWidget(btn_YInv);


        gridLayout_2->addWidget(widget_Y, 1, 1, 1, 1);

        check_Z = new QCheckBox(Mayo__WidgetClipPlanes);
        check_Z->setObjectName(QStringLiteral("check_Z"));

        gridLayout_2->addWidget(check_Z, 2, 0, 1, 1);

        widget_Z = new QWidget(Mayo__WidgetClipPlanes);
        widget_Z->setObjectName(QStringLiteral("widget_Z"));
        horizontalLayout_3 = new QHBoxLayout(widget_Z);
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        spin_ZPos = new QDoubleSpinBox(widget_Z);
        spin_ZPos->setObjectName(QStringLiteral("spin_ZPos"));
        spin_ZPos->setMaximum(0);

        horizontalLayout_3->addWidget(spin_ZPos);

        slider_ZPos = new QSlider(widget_Z);
        slider_ZPos->setObjectName(QStringLiteral("slider_ZPos"));
        slider_ZPos->setMaximum(100);
        slider_ZPos->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(slider_ZPos);

        btn_ZInv = new QToolButton(widget_Z);
        btn_ZInv->setObjectName(QStringLiteral("btn_ZInv"));

        horizontalLayout_3->addWidget(btn_ZInv);


        gridLayout_2->addWidget(widget_Z, 2, 1, 1, 1);

        check_Custom = new QCheckBox(Mayo__WidgetClipPlanes);
        check_Custom->setObjectName(QStringLiteral("check_Custom"));

        gridLayout_2->addWidget(check_Custom, 3, 0, 1, 1);

        widget_Custom = new QWidget(Mayo__WidgetClipPlanes);
        widget_Custom->setObjectName(QStringLiteral("widget_Custom"));
        gridLayout = new QGridLayout(widget_Custom);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_CustomInv = new QToolButton(widget_Custom);
        btn_CustomInv->setObjectName(QStringLiteral("btn_CustomInv"));

        gridLayout->addWidget(btn_CustomInv, 0, 2, 1, 1);

        spin_CustomPos = new QDoubleSpinBox(widget_Custom);
        spin_CustomPos->setObjectName(QStringLiteral("spin_CustomPos"));
        spin_CustomPos->setMaximum(0);

        gridLayout->addWidget(spin_CustomPos, 0, 0, 1, 1);

        slider_CustomPos = new QSlider(widget_Custom);
        slider_CustomPos->setObjectName(QStringLiteral("slider_CustomPos"));
        slider_CustomPos->setMaximum(100);
        slider_CustomPos->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(slider_CustomPos, 0, 1, 1, 1);

        widget_CustomDir = new QWidget(widget_Custom);
        widget_CustomDir->setObjectName(QStringLiteral("widget_CustomDir"));
        horizontalLayout_5 = new QHBoxLayout(widget_CustomDir);
        horizontalLayout_5->setSpacing(2);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        spin_CustomDirX = new QDoubleSpinBox(widget_CustomDir);
        spin_CustomDirX->setObjectName(QStringLiteral("spin_CustomDirX"));
        spin_CustomDirX->setMinimum(-1);
        spin_CustomDirX->setMaximum(1);
        spin_CustomDirX->setSingleStep(0.05);
        spin_CustomDirX->setValue(1);

        horizontalLayout_5->addWidget(spin_CustomDirX);

        spin_CustomDirY = new QDoubleSpinBox(widget_CustomDir);
        spin_CustomDirY->setObjectName(QStringLiteral("spin_CustomDirY"));
        spin_CustomDirY->setMinimum(-1);
        spin_CustomDirY->setMaximum(1);
        spin_CustomDirY->setSingleStep(0.05);
        spin_CustomDirY->setValue(1);

        horizontalLayout_5->addWidget(spin_CustomDirY);

        spin_CustomDirZ = new QDoubleSpinBox(widget_CustomDir);
        spin_CustomDirZ->setObjectName(QStringLiteral("spin_CustomDirZ"));
        spin_CustomDirZ->setMinimum(-1);
        spin_CustomDirZ->setMaximum(1);
        spin_CustomDirZ->setSingleStep(0.05);
        spin_CustomDirZ->setValue(1);

        horizontalLayout_5->addWidget(spin_CustomDirZ);


        gridLayout->addWidget(widget_CustomDir, 1, 0, 1, 3);


        gridLayout_2->addWidget(widget_Custom, 3, 1, 2, 1);


        retranslateUi(Mayo__WidgetClipPlanes);

        QMetaObject::connectSlotsByName(Mayo__WidgetClipPlanes);
    } // setupUi

    void retranslateUi(QWidget *Mayo__WidgetClipPlanes)
    {
        Mayo__WidgetClipPlanes->setWindowTitle(QApplication::translate("Mayo::WidgetClipPlanes", "Edit clip planes", nullptr));
        check_X->setText(QApplication::translate("Mayo::WidgetClipPlanes", "X plane", nullptr));
#ifndef QT_NO_TOOLTIP
        btn_XInv->setToolTip(QApplication::translate("Mayo::WidgetClipPlanes", "Reverse plane", nullptr));
#endif // QT_NO_TOOLTIP
        btn_XInv->setText(QApplication::translate("Mayo::WidgetClipPlanes", "+/-", nullptr));
        check_Y->setText(QApplication::translate("Mayo::WidgetClipPlanes", "Y plane", nullptr));
#ifndef QT_NO_TOOLTIP
        btn_YInv->setToolTip(QApplication::translate("Mayo::WidgetClipPlanes", "Reverse plane", nullptr));
#endif // QT_NO_TOOLTIP
        btn_YInv->setText(QApplication::translate("Mayo::WidgetClipPlanes", "+/-", nullptr));
        check_Z->setText(QApplication::translate("Mayo::WidgetClipPlanes", "Z plane", nullptr));
#ifndef QT_NO_TOOLTIP
        btn_ZInv->setToolTip(QApplication::translate("Mayo::WidgetClipPlanes", "Reverse plane", nullptr));
#endif // QT_NO_TOOLTIP
        btn_ZInv->setText(QApplication::translate("Mayo::WidgetClipPlanes", "+/-", nullptr));
        check_Custom->setText(QApplication::translate("Mayo::WidgetClipPlanes", "Custom", nullptr));
#ifndef QT_NO_TOOLTIP
        btn_CustomInv->setToolTip(QApplication::translate("Mayo::WidgetClipPlanes", "Reverse plane", nullptr));
#endif // QT_NO_TOOLTIP
        btn_CustomInv->setText(QApplication::translate("Mayo::WidgetClipPlanes", "+/-", nullptr));
        spin_CustomDirX->setPrefix(QApplication::translate("Mayo::WidgetClipPlanes", "X ", nullptr));
        spin_CustomDirY->setPrefix(QApplication::translate("Mayo::WidgetClipPlanes", "Y ", nullptr));
        spin_CustomDirZ->setPrefix(QApplication::translate("Mayo::WidgetClipPlanes", "Z ", nullptr));
    } // retranslateUi

};

} // namespace Mayo

namespace Mayo {
namespace Ui {
    class WidgetClipPlanes: public Ui_WidgetClipPlanes {};
} // namespace Ui
} // namespace Mayo

#endif // UI_WIDGET_CLIP_PLANES_H
