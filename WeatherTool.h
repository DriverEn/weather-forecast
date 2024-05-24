#ifndef WEATHERTOOL_H
#define WEATHERTOOL_H


#include<QJsonDocument>
#include<QJsonObject>
#include<QJsonValue>
#include<QJsonArray>
#include<QJsonParseError>
#include<map>
#include<QFile>
#include<QCoreApplication>

class WeatherTool
{
public:
    WeatherTool()
    {
        //获取当前程序运行的路径
        QString filePath=QCoreApplication::applicationDirPath();
        //创建错误信息收集的对象
        QJsonParseError err;
        //构建文件所在的路径。
        filePath+="/citycode-2019-08-23.json";
        //打开文件
        QFile file(filePath);
        file.open(QIODevice::ReadOnly|QIODevice::Text);
        QByteArray json=file.readAll();
        file.close();
        //读取json数据,将json解析为UTF-8编码的json文档
        QJsonDocument jsonDoc=QJsonDocument::fromJson(json,&err);
        //获取城市列表数组
        QJsonArray citys=jsonDoc.array();
        for(int i=0;i<citys.size();i++)
        {
            QString code=citys.at(i).toObject().value("city_code").toString();
            QString city = citys.at(i).toObject().value("city_name").toString();
            if(code.size()>0){
                m_mapCity2Code.insert(std::pair<QString,QString>(city,code));
            }
        }
    }

    //重载操作符[“city”]。根据城市名称直接得到城市代码：
    QString operator[](const QString& city){
        std::map<QString,QString>::iterator it = m_mapCity2Code.find(city);
        //如果没有找到，后面加上“市”再去搜索。
        //比如搜索了“上海”没找到，就会再去搜索“上海市”。
        if(it==m_mapCity2Code.end()){
            it = m_mapCity2Code.find(city+u8"市");
        }
        if(it==m_mapCity2Code.end()){
            it = m_mapCity2Code.find(city+u8"县");
        }
        if(it!=m_mapCity2Code.end()){
            //找到直接返回城市代码
            return it->second;
        }
        //没找到返回9个0
        return "000000000";
    }


private:
    std::map<QString,QString> m_mapCity2Code;
};

#endif // WEATHERTOOL_H

