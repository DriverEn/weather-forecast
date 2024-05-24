#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QMenu>
#include<QAction>
#include <QLabel>
#include<QNetworkAccessManager>
#include<QNetworkReply>
#include<QNetworkRequest>
#include<QByteArray>
#include <QTimer>

#include "WeatherTool.h"
#include "weatherdata.h"

#define TEMPERATURE_STARTING_COORDINATE 45 // 高温平均值起始坐标
#define SPAN_INDEX 3 // 温度曲线间隔指数
#define ORIGIN_SIZE 3 // 温度曲线原点大小

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    virtual bool eventFilter(QObject* watched,QEvent* event);
protected:
    void contextMenuEvent(QContextMenuEvent* event);
    void mouseMoveEvent(QMouseEvent* event);
    void mousePressEvent(QMouseEvent* event);

    void getWeatherInfo(QNetworkAccessManager* manager);
    void parseJson(QByteArray& bytes);
    void setLabelContent();
    void paintSunRiseSet();
    void paintCurve();


private slots:
    void slot_exitApp();
    void replayFinished(QNetworkReply* reply);




    void on_refreshBtn_clicked();

    void on_searchBtn_clicked();

private:
    Ui::Widget *ui;

    QMenu* exitMenu; //右键退出的菜单
    QAction* exitAct; //退出的行动
    QPoint mPos; //窗口移动需要用到的点

    //UI
    QList<QLabel *> forecast_week_list;         //星期
    QList<QLabel *> forecast_date_list;         //日期
    QList<QLabel *> forecast_aqi_list;          //天气指数
    QList<QLabel *> forecast_type_list;         //天气
    QList<QLabel *> forecast_typeIco_list;      //天气图标
    QList<QLabel *> forecast_high_list;         //高温
    QList<QLabel *> forecast_low_list;          //低温

    QString url;        //接口链接
    QString city;       //访问的城市
    QString cityTmp;    //临时存放城市变量，防止输入错误城市的时候，原来的城市名称还在。
    WeatherTool tool;   //天气工具对象
    QNetworkAccessManager* manager;

    //本地数据
    Today today;
    Forecast forecast[6];

    static const QPoint sun[2]; //日出日落底线
    static const QRect sunRizeSet[2]; //日出日落时间
    static const QRect rect[2]; //日出日落圆弧
    QTimer* sunTimer;





    void callKeyBoard();
};
#endif // WIDGET_H
