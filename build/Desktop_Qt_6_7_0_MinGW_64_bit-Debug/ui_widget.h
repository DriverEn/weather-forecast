/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QLineEdit *cityLineEdit;
    QLabel *dateLb;
    QFrame *hLine_1;
    QFrame *hLine_10;
    QFrame *hLine_11;
    QLabel *titleLb;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *flTitleLb;
    QLabel *fxTitleLb;
    QLabel *pm25TitleLb;
    QLabel *shiduTitleLb;
    QLabel *shiduLb;
    QLabel *pm25Lb;
    QLabel *fxLb;
    QLabel *flLb;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *cityLb;
    QLabel *label;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *week4Lb;
    QLabel *type1Lb;
    QLabel *quality0Lb;
    QLabel *high4Lb;
    QLabel *high1Lb;
    QLabel *week0Lb;
    QLabel *date5Lb;
    QLabel *type3Lb;
    QLabel *week3Lb;
    QLabel *high0Lb;
    QLabel *quality1Lb;
    QLabel *date3Lb;
    QLabel *quality2Lb;
    QLabel *date4Lb;
    QLabel *high5Lb;
    QLabel *week5Lb;
    QLabel *high2Lb;
    QLabel *date2Lb;
    QLabel *week2Lb;
    QLabel *low1Lb;
    QLabel *low2Lb;
    QLabel *low5Lb;
    QLabel *high3Lb;
    QLabel *type4Lb;
    QLabel *date1Lb;
    QLabel *curveLb;
    QLabel *type0Lb;
    QLabel *week1Lb;
    QLabel *quality5Lb;
    QLabel *quality3Lb;
    QLabel *type5Lb;
    QLabel *low4Lb;
    QLabel *type2Lb;
    QLabel *low3Lb;
    QLabel *quality4Lb;
    QLabel *date0Lb;
    QLabel *low0Lb;
    QLabel *typeIco0Lb;
    QLabel *typeIco1Lb;
    QLabel *typeIco2Lb;
    QLabel *typeIco3Lb;
    QLabel *typeIco4Lb;
    QLabel *typeIco5Lb;
    QLabel *leafLb;
    QLabel *qualityLb;
    QLabel *temLb;
    QLabel *typeLb;
    QLabel *typeIcoLb;
    QLabel *noticeLb;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QTextBrowser *ganmaoBrowser;
    QFrame *vLine_1;
    QToolButton *searchBtn;
    QToolButton *refreshBtn;
    QLabel *sunRiseSetLb;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 450);
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 800, 450));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"border-image: url(:/weaUI/weaUI.png);\n"
"color:rgb(255,255,255);\n"
"}\n"
"QLabel{\n"
"font: 25 10pt \"Microsoft YaHei\";\n"
"border-radius: 4px;\n"
"background-color: argb(60, 60, 60, 130);\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"Line{\n"
"background-color: rgb(0, 85, 0);\n"
"}"));
        cityLineEdit = new QLineEdit(widget);
        cityLineEdit->setObjectName("cityLineEdit");
        cityLineEdit->setGeometry(QRect(575, 10, 171, 31));
        dateLb = new QLabel(widget);
        dateLb->setObjectName("dateLb");
        dateLb->setGeometry(QRect(190, 3, 421, 41));
        dateLb->setStyleSheet(QString::fromUtf8("font: 20pt \"Adobe \351\273\221\344\275\223 Std R\";\n"
"color: rgb(255, 255 , 255);\n"
"background-color: rgb(255, 255 , 255, 0);\n"
""));
        dateLb->setAlignment(Qt::AlignCenter);
        hLine_1 = new QFrame(widget);
        hLine_1->setObjectName("hLine_1");
        hLine_1->setGeometry(QRect(10, 45, 781, 1));
        hLine_1->setFrameShape(QFrame::Shape::HLine);
        hLine_1->setFrameShadow(QFrame::Shadow::Sunken);
        hLine_10 = new QFrame(widget);
        hLine_10->setObjectName("hLine_10");
        hLine_10->setGeometry(QRect(10, 183, 351, 1));
        hLine_10->setFrameShape(QFrame::Shape::HLine);
        hLine_10->setFrameShadow(QFrame::Shadow::Sunken);
        hLine_11 = new QFrame(widget);
        hLine_11->setObjectName("hLine_11");
        hLine_11->setGeometry(QRect(10, 335, 351, 1));
        hLine_11->setFrameShape(QFrame::Shape::HLine);
        hLine_11->setFrameShadow(QFrame::Shadow::Sunken);
        titleLb = new QLabel(widget);
        titleLb->setObjectName("titleLb");
        titleLb->setGeometry(QRect(80, 10, 171, 31));
        titleLb->setStyleSheet(QString::fromUtf8("font: 700 italic 20pt \"Georgia\";\n"
"background-color: rgba(255 , 255 , 255 , 0);\n"
"color: rgb(85, 255, 0);"));
        gridLayoutWidget = new QWidget(widget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 190, 321, 141));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        flTitleLb = new QLabel(gridLayoutWidget);
        flTitleLb->setObjectName("flTitleLb");
        flTitleLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(flTitleLb, 3, 0, 1, 1);

        fxTitleLb = new QLabel(gridLayoutWidget);
        fxTitleLb->setObjectName("fxTitleLb");
        fxTitleLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(fxTitleLb, 2, 0, 1, 1);

        pm25TitleLb = new QLabel(gridLayoutWidget);
        pm25TitleLb->setObjectName("pm25TitleLb");
        pm25TitleLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pm25TitleLb, 1, 0, 1, 1);

        shiduTitleLb = new QLabel(gridLayoutWidget);
        shiduTitleLb->setObjectName("shiduTitleLb");
        shiduTitleLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(shiduTitleLb, 0, 0, 1, 1);

        shiduLb = new QLabel(gridLayoutWidget);
        shiduLb->setObjectName("shiduLb");
        shiduLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(shiduLb, 0, 1, 1, 2);

        pm25Lb = new QLabel(gridLayoutWidget);
        pm25Lb->setObjectName("pm25Lb");
        pm25Lb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pm25Lb, 1, 1, 1, 2);

        fxLb = new QLabel(gridLayoutWidget);
        fxLb->setObjectName("fxLb");
        fxLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(fxLb, 2, 1, 1, 2);

        flLb = new QLabel(gridLayoutWidget);
        flLb->setObjectName("flLb");
        flLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(flLb, 3, 1, 1, 2);

        gridLayoutWidget_2 = new QWidget(widget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(200, 60, 141, 41));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        cityLb = new QLabel(gridLayoutWidget_2);
        cityLb->setObjectName("cityLb");
        cityLb->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 16pt \"Microsoft YaHei UI\";\n"
"background-color: rgba(60, 60, 60, 0);"));
        cityLb->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(cityLb, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("background-color: argb(60, 60, 60, 0);\n"
"image: url(:/weatherIco/location.ico);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(widget);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(350, 60, 421, 381));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        week4Lb = new QLabel(gridLayoutWidget_3);
        week4Lb->setObjectName("week4Lb");
        week4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(week4Lb, 0, 4, 1, 1);

        type1Lb = new QLabel(gridLayoutWidget_3);
        type1Lb->setObjectName("type1Lb");
        type1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type1Lb, 3, 1, 1, 1);

        quality0Lb = new QLabel(gridLayoutWidget_3);
        quality0Lb->setObjectName("quality0Lb");
        quality0Lb->setStyleSheet(QString::fromUtf8("color:rgb(0,170,0);"));
        quality0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(quality0Lb, 2, 0, 1, 1);

        high4Lb = new QLabel(gridLayoutWidget_3);
        high4Lb->setObjectName("high4Lb");
        high4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high4Lb, 6, 4, 1, 1);

        high1Lb = new QLabel(gridLayoutWidget_3);
        high1Lb->setObjectName("high1Lb");
        high1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high1Lb, 6, 1, 1, 1);

        week0Lb = new QLabel(gridLayoutWidget_3);
        week0Lb->setObjectName("week0Lb");
        week0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(week0Lb, 0, 0, 1, 1);

        date5Lb = new QLabel(gridLayoutWidget_3);
        date5Lb->setObjectName("date5Lb");
        date5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(date5Lb, 1, 5, 1, 1);

        type3Lb = new QLabel(gridLayoutWidget_3);
        type3Lb->setObjectName("type3Lb");
        type3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type3Lb, 3, 3, 1, 1);

        week3Lb = new QLabel(gridLayoutWidget_3);
        week3Lb->setObjectName("week3Lb");
        week3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(week3Lb, 0, 3, 1, 1);

        high0Lb = new QLabel(gridLayoutWidget_3);
        high0Lb->setObjectName("high0Lb");
        high0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high0Lb, 6, 0, 1, 1);

        quality1Lb = new QLabel(gridLayoutWidget_3);
        quality1Lb->setObjectName("quality1Lb");
        quality1Lb->setStyleSheet(QString::fromUtf8("color:rgb(255,255,0);"));
        quality1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(quality1Lb, 2, 1, 1, 1);

        date3Lb = new QLabel(gridLayoutWidget_3);
        date3Lb->setObjectName("date3Lb");
        date3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(date3Lb, 1, 3, 1, 1);

        quality2Lb = new QLabel(gridLayoutWidget_3);
        quality2Lb->setObjectName("quality2Lb");
        quality2Lb->setStyleSheet(QString::fromUtf8("color:rgb(255,170,0);"));
        quality2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(quality2Lb, 2, 2, 1, 1);

        date4Lb = new QLabel(gridLayoutWidget_3);
        date4Lb->setObjectName("date4Lb");
        date4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(date4Lb, 1, 4, 1, 1);

        high5Lb = new QLabel(gridLayoutWidget_3);
        high5Lb->setObjectName("high5Lb");
        high5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high5Lb, 6, 5, 1, 1);

        week5Lb = new QLabel(gridLayoutWidget_3);
        week5Lb->setObjectName("week5Lb");
        week5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(week5Lb, 0, 5, 1, 1);

        high2Lb = new QLabel(gridLayoutWidget_3);
        high2Lb->setObjectName("high2Lb");
        high2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high2Lb, 6, 2, 1, 1);

        date2Lb = new QLabel(gridLayoutWidget_3);
        date2Lb->setObjectName("date2Lb");
        date2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(date2Lb, 1, 2, 1, 1);

        week2Lb = new QLabel(gridLayoutWidget_3);
        week2Lb->setObjectName("week2Lb");
        week2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(week2Lb, 0, 2, 1, 1);

        low1Lb = new QLabel(gridLayoutWidget_3);
        low1Lb->setObjectName("low1Lb");
        low1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low1Lb, 13, 1, 1, 1);

        low2Lb = new QLabel(gridLayoutWidget_3);
        low2Lb->setObjectName("low2Lb");
        low2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low2Lb, 13, 2, 1, 1);

        low5Lb = new QLabel(gridLayoutWidget_3);
        low5Lb->setObjectName("low5Lb");
        low5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low5Lb, 13, 5, 1, 1);

        high3Lb = new QLabel(gridLayoutWidget_3);
        high3Lb->setObjectName("high3Lb");
        high3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high3Lb, 6, 3, 1, 1);

        type4Lb = new QLabel(gridLayoutWidget_3);
        type4Lb->setObjectName("type4Lb");
        type4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type4Lb, 3, 4, 1, 1);

        date1Lb = new QLabel(gridLayoutWidget_3);
        date1Lb->setObjectName("date1Lb");
        date1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(date1Lb, 1, 1, 1, 1);

        curveLb = new QLabel(gridLayoutWidget_3);
        curveLb->setObjectName("curveLb");

        gridLayout_3->addWidget(curveLb, 7, 0, 3, 6);

        type0Lb = new QLabel(gridLayoutWidget_3);
        type0Lb->setObjectName("type0Lb");
        type0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type0Lb, 3, 0, 1, 1);

        week1Lb = new QLabel(gridLayoutWidget_3);
        week1Lb->setObjectName("week1Lb");
        week1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(week1Lb, 0, 1, 1, 1);

        quality5Lb = new QLabel(gridLayoutWidget_3);
        quality5Lb->setObjectName("quality5Lb");
        quality5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(quality5Lb, 2, 5, 1, 1);

        quality3Lb = new QLabel(gridLayoutWidget_3);
        quality3Lb->setObjectName("quality3Lb");
        quality3Lb->setStyleSheet(QString::fromUtf8("color:rgb(255,0,0);"));
        quality3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(quality3Lb, 2, 3, 1, 1);

        type5Lb = new QLabel(gridLayoutWidget_3);
        type5Lb->setObjectName("type5Lb");
        type5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type5Lb, 3, 5, 1, 1);

        low4Lb = new QLabel(gridLayoutWidget_3);
        low4Lb->setObjectName("low4Lb");
        low4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low4Lb, 13, 4, 1, 1);

        type2Lb = new QLabel(gridLayoutWidget_3);
        type2Lb->setObjectName("type2Lb");
        type2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type2Lb, 3, 2, 1, 1);

        low3Lb = new QLabel(gridLayoutWidget_3);
        low3Lb->setObjectName("low3Lb");
        low3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low3Lb, 13, 3, 1, 1);

        quality4Lb = new QLabel(gridLayoutWidget_3);
        quality4Lb->setObjectName("quality4Lb");
        quality4Lb->setStyleSheet(QString::fromUtf8("color:rgb(170,0,0);"));
        quality4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(quality4Lb, 2, 4, 1, 1);

        date0Lb = new QLabel(gridLayoutWidget_3);
        date0Lb->setObjectName("date0Lb");
        date0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(date0Lb, 1, 0, 1, 1);

        low0Lb = new QLabel(gridLayoutWidget_3);
        low0Lb->setObjectName("low0Lb");
        low0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low0Lb, 13, 0, 1, 1);

        typeIco0Lb = new QLabel(gridLayoutWidget_3);
        typeIco0Lb->setObjectName("typeIco0Lb");
        typeIco0Lb->setStyleSheet(QString::fromUtf8("image: url(:/day/day/wu.png);"));
        typeIco0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typeIco0Lb, 4, 0, 2, 1);

        typeIco1Lb = new QLabel(gridLayoutWidget_3);
        typeIco1Lb->setObjectName("typeIco1Lb");
        typeIco1Lb->setStyleSheet(QString::fromUtf8("image: url(:/day/day/qing.png);"));
        typeIco1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typeIco1Lb, 4, 1, 2, 1);

        typeIco2Lb = new QLabel(gridLayoutWidget_3);
        typeIco2Lb->setObjectName("typeIco2Lb");
        typeIco2Lb->setStyleSheet(QString::fromUtf8("image: url(:/day/day/qing.png);"));
        typeIco2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typeIco2Lb, 4, 2, 2, 1);

        typeIco3Lb = new QLabel(gridLayoutWidget_3);
        typeIco3Lb->setObjectName("typeIco3Lb");
        typeIco3Lb->setStyleSheet(QString::fromUtf8("image: url(:/day/day/qing.png);"));
        typeIco3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typeIco3Lb, 4, 3, 2, 1);

        typeIco4Lb = new QLabel(gridLayoutWidget_3);
        typeIco4Lb->setObjectName("typeIco4Lb");
        typeIco4Lb->setStyleSheet(QString::fromUtf8("image: url(:/day/day/qing.png);"));
        typeIco4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typeIco4Lb, 4, 4, 2, 1);

        typeIco5Lb = new QLabel(gridLayoutWidget_3);
        typeIco5Lb->setObjectName("typeIco5Lb");
        typeIco5Lb->setStyleSheet(QString::fromUtf8("image: url(:/day/day/qing.png);"));
        typeIco5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typeIco5Lb, 4, 5, 2, 1);

        leafLb = new QLabel(widget);
        leafLb->setObjectName("leafLb");
        leafLb->setGeometry(QRect(18, 58, 20, 20));
        leafLb->setStyleSheet(QString::fromUtf8("image: url(:/weatherIco/leaf.ico);\n"
"background-color:argb(255,255,255,0);"));
        qualityLb = new QLabel(widget);
        qualityLb->setObjectName("qualityLb");
        qualityLb->setGeometry(QRect(38, 58, 56, 20));
        qualityLb->setStyleSheet(QString::fromUtf8("background-color: argb(255,255,255,0);"));
        qualityLb->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        temLb = new QLabel(widget);
        temLb->setObjectName("temLb");
        temLb->setGeometry(QRect(40, 70, 171, 81));
        temLb->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"font:50pt \"Arial\";"));
        temLb->setAlignment(Qt::AlignCenter);
        typeLb = new QLabel(widget);
        typeLb->setObjectName("typeLb");
        typeLb->setGeometry(QRect(180, 110, 91, 31));
        typeLb->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background-color:argb(60,60,60,0);"));
        typeLb->setAlignment(Qt::AlignCenter);
        typeIcoLb = new QLabel(widget);
        typeIcoLb->setObjectName("typeIcoLb");
        typeIcoLb->setGeometry(QRect(250, 100, 81, 71));
        typeIcoLb->setStyleSheet(QString::fromUtf8("border-image:url(:/day/day/qing.png);\n"
"background-color:argb(60,60,60,0);"));
        typeIcoLb->setAlignment(Qt::AlignCenter);
        noticeLb = new QLabel(widget);
        noticeLb->setObjectName("noticeLb");
        noticeLb->setGeometry(QRect(10, 160, 351, 21));
        noticeLb->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background-color:rgb(60,60,60,0);"));
        gridLayoutWidget_4 = new QWidget(widget);
        gridLayoutWidget_4->setObjectName("gridLayoutWidget_4");
        gridLayoutWidget_4->setGeometry(QRect(10, 340, 191, 102));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget_4);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("background-color:argb(60,60,60,130);\n"
"border-radius:3px;\n"
"color:rgb(255,255,255);"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_2, 0, 3, 1, 1);

        ganmaoBrowser = new QTextBrowser(gridLayoutWidget_4);
        ganmaoBrowser->setObjectName("ganmaoBrowser");

        gridLayout_4->addWidget(ganmaoBrowser, 0, 4, 1, 1);

        vLine_1 = new QFrame(widget);
        vLine_1->setObjectName("vLine_1");
        vLine_1->setGeometry(QRect(205, 340, 1, 101));
        vLine_1->setFrameShape(QFrame::Shape::VLine);
        vLine_1->setFrameShadow(QFrame::Shadow::Sunken);
        searchBtn = new QToolButton(widget);
        searchBtn->setObjectName("searchBtn");
        searchBtn->setGeometry(QRect(722, 15, 20, 20));
        searchBtn->setCursor(QCursor(Qt::PointingHandCursor));
        searchBtn->setStyleSheet(QString::fromUtf8("border-image:url(:/weatherIco/search.ico);"));
        refreshBtn = new QToolButton(widget);
        refreshBtn->setObjectName("refreshBtn");
        refreshBtn->setGeometry(QRect(750, 10, 41, 31));
        refreshBtn->setCursor(QCursor(Qt::PointingHandCursor));
        refreshBtn->setStyleSheet(QString::fromUtf8("image: url(:/weatherIco/refresh.ico);\n"
"background-color:argb(255,255,255,0);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/weatherIco/refresh.ico"), QSize(), QIcon::Normal, QIcon::Off);
        refreshBtn->setIcon(icon);
        refreshBtn->setIconSize(QSize(31, 31));
        sunRiseSetLb = new QLabel(widget);
        sunRiseSetLb->setObjectName("sunRiseSetLb");
        sunRiseSetLb->setGeometry(QRect(210, 340, 160, 100));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        dateLb->setText(QCoreApplication::translate("Widget", "\345\275\223\345\211\215\346\227\245\346\234\237", nullptr));
        titleLb->setText(QCoreApplication::translate("Widget", "\345\244\251\346\260\224\351\242\204\346\212\245", nullptr));
        flTitleLb->setText(QCoreApplication::translate("Widget", "\351\243\216\345\212\233", nullptr));
        fxTitleLb->setText(QCoreApplication::translate("Widget", "\351\243\216\345\220\221", nullptr));
        pm25TitleLb->setText(QCoreApplication::translate("Widget", "PM2.5", nullptr));
        shiduTitleLb->setText(QCoreApplication::translate("Widget", "\346\271\277\345\272\246", nullptr));
        shiduLb->setText(QCoreApplication::translate("Widget", "unknown", nullptr));
        pm25Lb->setText(QCoreApplication::translate("Widget", "unknown", nullptr));
        fxLb->setText(QCoreApplication::translate("Widget", "unknown", nullptr));
        flLb->setText(QCoreApplication::translate("Widget", "unknown", nullptr));
        cityLb->setText(QCoreApplication::translate("Widget", "\346\265\216\345\215\227\345\270\202", nullptr));
        label->setText(QString());
        week4Lb->setText(QCoreApplication::translate("Widget", "\345\221\250\344\272\224", nullptr));
        type1Lb->setText(QCoreApplication::translate("Widget", "\346\231\264", nullptr));
        quality0Lb->setText(QCoreApplication::translate("Widget", "\344\274\230\350\264\250", nullptr));
        high4Lb->setText(QCoreApplication::translate("Widget", "30\342\204\203", nullptr));
        high1Lb->setText(QCoreApplication::translate("Widget", "27\342\204\203", nullptr));
        week0Lb->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        date5Lb->setText(QCoreApplication::translate("Widget", "06/06", nullptr));
        type3Lb->setText(QCoreApplication::translate("Widget", "\346\231\264", nullptr));
        week3Lb->setText(QCoreApplication::translate("Widget", "\345\220\216\345\244\251", nullptr));
        high0Lb->setText(QCoreApplication::translate("Widget", "25\342\204\203", nullptr));
        quality1Lb->setText(QCoreApplication::translate("Widget", "\350\211\257\345\245\275", nullptr));
        date3Lb->setText(QCoreApplication::translate("Widget", "04/04", nullptr));
        quality2Lb->setText(QCoreApplication::translate("Widget", "\350\275\273\345\272\246\346\261\241\346\237\223", nullptr));
        date4Lb->setText(QCoreApplication::translate("Widget", "05/05", nullptr));
        high5Lb->setText(QCoreApplication::translate("Widget", "35\342\204\203", nullptr));
        week5Lb->setText(QCoreApplication::translate("Widget", "\345\221\250\345\205\255", nullptr));
        high2Lb->setText(QCoreApplication::translate("Widget", "28\342\204\203", nullptr));
        date2Lb->setText(QCoreApplication::translate("Widget", "03/03", nullptr));
        week2Lb->setText(QCoreApplication::translate("Widget", "\346\230\216\345\244\251", nullptr));
        low1Lb->setText(QCoreApplication::translate("Widget", "15\342\204\203", nullptr));
        low2Lb->setText(QCoreApplication::translate("Widget", "16\342\204\203", nullptr));
        low5Lb->setText(QCoreApplication::translate("Widget", "20\342\204\203", nullptr));
        high3Lb->setText(QCoreApplication::translate("Widget", "29\342\204\203", nullptr));
        type4Lb->setText(QCoreApplication::translate("Widget", "\346\231\264", nullptr));
        date1Lb->setText(QCoreApplication::translate("Widget", "02/02", nullptr));
        curveLb->setText(QString());
        type0Lb->setText(QCoreApplication::translate("Widget", "\346\231\264", nullptr));
        week1Lb->setText(QCoreApplication::translate("Widget", "\344\273\212\345\244\251", nullptr));
        quality5Lb->setText(QCoreApplication::translate("Widget", "xx", nullptr));
        quality3Lb->setText(QCoreApplication::translate("Widget", "\344\270\255\345\272\246\346\261\241\346\237\223", nullptr));
        type5Lb->setText(QCoreApplication::translate("Widget", "\346\231\264", nullptr));
        low4Lb->setText(QCoreApplication::translate("Widget", "19\342\204\203", nullptr));
        type2Lb->setText(QCoreApplication::translate("Widget", "\346\231\264", nullptr));
        low3Lb->setText(QCoreApplication::translate("Widget", "18\342\204\203", nullptr));
        quality4Lb->setText(QCoreApplication::translate("Widget", "\344\270\245\351\207\215\346\261\241\346\237\223", nullptr));
        date0Lb->setText(QCoreApplication::translate("Widget", "01/01", nullptr));
        low0Lb->setText(QCoreApplication::translate("Widget", "13\342\204\203", nullptr));
        typeIco0Lb->setText(QString());
        typeIco1Lb->setText(QString());
        typeIco2Lb->setText(QString());
        typeIco3Lb->setText(QString());
        typeIco4Lb->setText(QString());
        typeIco5Lb->setText(QString());
        leafLb->setText(QString());
        qualityLb->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        temLb->setText(QCoreApplication::translate("Widget", "20\342\204\203", nullptr));
        typeLb->setText(QCoreApplication::translate("Widget", "\346\231\264", nullptr));
        typeIcoLb->setText(QString());
        noticeLb->setText(QCoreApplication::translate("Widget", "\345\244\251\346\260\224\346\217\220\347\244\272", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "<html><head/><body><p>\346\204\237</p><p>\345\206\222</p><p>\346\214\207</p><p>\346\225\260</p></body></html>", nullptr));
        searchBtn->setText(QString());
        refreshBtn->setText(QString());
        sunRiseSetLb->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
