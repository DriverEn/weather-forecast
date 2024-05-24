QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

QT += network
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    weatherdata.cpp \
    widget.cpp

HEADERS += \
    WeatherTool.h \
    weatherdata.h \
    widget.h

FORMS += \
    widget.ui

TRANSLATIONS += \
    weather-forecast_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icons/icons.qrc \
    images/images.qrc \
    weatherIcons/weatypeico.qrc

DISTFILES += \
    icons/close.ico \
    icons/leaf.ico \
    icons/location.ico \
    icons/refresh.ico \
    icons/search.ico \
    images/weaUI.png \
    weatherIcons/day/baoxue.png \
    weatherIcons/day/baoyu.png \
    weatherIcons/day/baoyu.png \
    weatherIcons/day/baoyudaodabaoyu.png \
    weatherIcons/day/baoyudaodabaoyu.png \
    weatherIcons/day/dabaoyu.png \
    weatherIcons/day/dabaoyu.png \
    weatherIcons/day/dabaoyudaotedabaoyu.png \
    weatherIcons/day/dabaoyudaotedabaoyu.png \
    weatherIcons/day/dadaobaoxue.png \
    weatherIcons/day/dadaobaoxue.png \
    weatherIcons/day/dadaobaoyu.png \
    weatherIcons/day/dadaobaoyu.png \
    weatherIcons/day/daxue.png \
    weatherIcons/day/daxue.png \
    weatherIcons/day/dayu.png \
    weatherIcons/day/dayu.png \
    weatherIcons/day/dongyu.png \
    weatherIcons/day/dongyu.png \
    weatherIcons/day/duoyun.png \
    weatherIcons/day/duoyun.png \
    weatherIcons/day/fuchen.png \
    weatherIcons/day/fuchen.png \
    weatherIcons/day/leizhenyu.png \
    weatherIcons/day/leizhenyu.png \
    weatherIcons/day/leizhenyubanyoubingbao.png \
    weatherIcons/day/leizhenyubanyoubingbao.png \
    weatherIcons/day/mai.png \
    weatherIcons/day/mai.png \
    weatherIcons/day/qiangshachenbao.png \
    weatherIcons/day/qiangshachenbao.png \
    weatherIcons/day/qing.png \
    weatherIcons/day/qing.png \
    weatherIcons/day/shachenbao.png \
    weatherIcons/day/shachenbao.png \
    weatherIcons/day/tedabaoyu.png \
    weatherIcons/day/tedabaoyu.png \
    weatherIcons/day/undefined.png \
    weatherIcons/day/wu.png \
    weatherIcons/day/wu.png \
    weatherIcons/day/xiaodaozhongxue.png \
    weatherIcons/day/xiaodaozhongxue.png \
    weatherIcons/day/xiaodaozhongyu.png \
    weatherIcons/day/xiaodaozhongyu.png \
    weatherIcons/day/xiaoxue.png \
    weatherIcons/day/xiaoxue.png \
    weatherIcons/day/xiaoyu.png \
    weatherIcons/day/xiaoyu.png \
    weatherIcons/day/xue.png \
    weatherIcons/day/xue.png \
    weatherIcons/day/yangsha.png \
    weatherIcons/day/yangsha.png \
    weatherIcons/day/yin.png \
    weatherIcons/day/yin.png \
    weatherIcons/day/yu.png \
    weatherIcons/day/yu.png \
    weatherIcons/day/yujiaxue.png \
    weatherIcons/day/yujiaxue.png \
    weatherIcons/day/zhenxue.png \
    weatherIcons/day/zhenxue.png \
    weatherIcons/day/zhenyu.png \
    weatherIcons/day/zhenyu.png \
    weatherIcons/day/zhongdaodaxue.png \
    weatherIcons/day/zhongdaodaxue.png \
    weatherIcons/day/zhongdaodayu.png \
    weatherIcons/day/zhongdaodayu.png \
    weatherIcons/day/zhongxue.png \
    weatherIcons/day/zhongxue.png \
    weatherIcons/day/zhongyu.png \
    weatherIcons/day/zhongyu.png \
    weatherIcons/night/baoxue.png \
    weatherIcons/night/baoyu.png \
    weatherIcons/night/baoyudaodabaoyu.png \
    weatherIcons/night/dabaoyu.png \
    weatherIcons/night/dabaoyudaotedabaoyu.png \
    weatherIcons/night/dadaobaoxue.png \
    weatherIcons/night/dadaobaoyu.png \
    weatherIcons/night/daxue.png \
    weatherIcons/night/dayu.png \
    weatherIcons/night/dongyu.png \
    weatherIcons/night/duoyun.png \
    weatherIcons/night/fuchen.png \
    weatherIcons/night/leizhenyu.png \
    weatherIcons/night/leizhenyubanyoubingbao.png \
    weatherIcons/night/mai.png \
    weatherIcons/night/qiangshachenbao.png \
    weatherIcons/night/qing.png \
    weatherIcons/night/shachenbao.png \
    weatherIcons/night/tedabaoyu.png \
    weatherIcons/night/undefined.png \
    weatherIcons/night/wu.png \
    weatherIcons/night/xiaodaozhongxue.png \
    weatherIcons/night/xiaodaozhongyu.png \
    weatherIcons/night/xiaoxue.png \
    weatherIcons/night/xiaoyu.png \
    weatherIcons/night/xue.png \
    weatherIcons/night/yangsha.png \
    weatherIcons/night/yin.png \
    weatherIcons/night/yu.png \
    weatherIcons/night/yujiaxue.png \
    weatherIcons/night/zhenxue.png \
    weatherIcons/night/zhenyu.png \
    weatherIcons/night/zhongdaodaxue.png \
    weatherIcons/night/zhongdaodayu.png \
    weatherIcons/night/zhongxue.png \
    weatherIcons/night/zhongyu.png
