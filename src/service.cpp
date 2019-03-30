#include "service.h"

using namespace Cutelyst;

Service::Service(QObject *parent) : Controller(parent)
{
}

Service::~Service()
{
}

void Service::index(Context *c)
{
    c->response()->body() = "Matched Controller::Service in Service.";
}

void Service::ports(Context *c)
{

}

void Service::ports_GET(Context *c)
{
    qDebug() << Q_FUNC_INFO;

    QStringList message;
    QList<QNetworkInterface> interfaces =  QNetworkInterface::allInterfaces();

    for(QNetworkInterface interface: interfaces){
        message.append(interface.humanReadableName());
    }
    c->response()->setJsonArrayBody(QJsonArray::fromStringList(message));
}

void Service::ports_uuid(Context *c, const QString &uuid)
{
    qDebug() << Q_FUNC_INFO << uuid;
}

void Service::ports_uuid_GET(Context *c, const QString &name)
{
    QList<QNetworkInterface> interfaces =  QNetworkInterface::allInterfaces();
    QMap <QString,QNetworkInterface> interfacesMap;
    for(QNetworkInterface interface : interfaces){
        interfacesMap.insert(interface.name(),interface);
    }
    if(interfacesMap.contains(name)){
        QNetworkInterface interface = interfacesMap.value(name);
        c->response()->setJsonObjectBody({
                                             {QStringLiteral("name"),name},
                                             {QStringLiteral("hw_addr"),interface.hardwareAddress()},
//                                             {QStringLiteral("inet_addr"),interface.allAddresses()[0].toIPv4Address().}
//                                             {"MTU",interface.maximumTransmissionUnit()}
                                         });
    }else{
        c->response()->body()="No such interfaces";
    }
//    QByteArray message;
//    QList<QNetworkInterface> interfaces =  QNetworkInterface::allInterfaces();
//    for(QNetworkInterface interface: interfaces){
//        message.append(interface.humanReadableName());
    //    }
}

void Service::version(Context *c)
{

}

void Service::version_GET(Context *c)
{
    QSettings s;
    if(s.childGroups().contains("version")){
        s.beginGroup("version");
        c->response()->setJsonObjectBody({
                                             {QStringLiteral("ver"),s.value("ver").toString()}
                                         });
    }else{
        c->response()->body() = "Version not set";
    }
}

void Service::version_POST(Context *c)
{
    const QJsonDocument doc = c->request()->bodyData().toJsonDocument();
    const QJsonObject obj = doc.object();
//    qDebug()<<"SET VERSION "<<obj.;
//    QSettings s;
//    s.beginGroup("version");
//    s.setValue(QStringLiteral("ver"),obj.value("ver").toInt());
//    s.endGroup();
//    s.sync();
//    qDebug()<<"VERSION"<<s.value("ver").toInt();
//    if (s.status()) {
//        c->response()->setJsonObjectBody({
//                                       {QStringLiteral("status"), QStringLiteral("error")},
//                                       {QStringLiteral("error"), QStringLiteral("failed")}
//                                   });
//    }else{
//        c->response()->setJsonObjectBody({
//                                       {QStringLiteral("status"), QStringLiteral("ok")},
//                                       {QStringLiteral("ver"), s.value("ver").toString()}
//                                   });
//    }

}

//void Service::version(Context *c)
//{
//    c->response()->body() = QByteArray::number(SERVICE_VERSION);

//}

