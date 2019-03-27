#include "service.h"

using namespace Cutelyst;

Service::Service(QObject *parent) : Controller(parent)
{
}

Service::~Service()
{
}



void Service::users(Context *c)
{
    qDebug() << Q_FUNC_INFO;
}

void Service::users_GET(Context *c)
{
    qDebug() << Q_FUNC_INFO;
    QSettings s;
    const QStringList uuids = s.childGroups();
    QList<QSerialPortInfo> comPorts = QSerialPortInfo::availablePorts();
    QStringList portsNames;
//    = comPorts.toStdList()
    for(QSerialPortInfo port : comPorts){
        portsNames.append(port.portName()+" "+port.productIdentifier());
    }
    c->response()->setJsonArrayBody(QJsonArray::fromStringList(portsNames));
}

void Service::users_POST(Context *c)
{
    qDebug() << Q_FUNC_INFO;
    const QString uuid = QUuid::createUuid().toString()
            .remove(QLatin1Char('{'))
            .remove(QLatin1Char('}'));
    users_uuid_PUT(c, uuid);
}

void Service::users_uuid(Context *c, const QString &uuid)
{
    qDebug() << Q_FUNC_INFO << uuid;

}

void Service::users_uuid_GET(Context *c, const QString &uuid)
{
    qDebug() << Q_FUNC_INFO << uuid;

       QSettings s;
       if (s.childGroups().contains(uuid)) {
           s.beginGroup(uuid);
           c->response()->setJsonObjectBody({
                                                {QStringLiteral("port"), s.value(QStringLiteral("port")).toString()}

                                            }

                                            /*{
                                                {QStringLiteral("name"), s.value(QStringLiteral("name")).toString()},
                                                {QStringLiteral("age"), s.value(QStringLiteral("age")).toInt()}
                                            }*/);
       } else {
           c->response()->setJsonObjectBody({
                                          {QStringLiteral("error"), QStringLiteral("not found")}
                                      });
           c->response()->setStatus(Response::NotFound);
       }
}

void Service::users_uuid_PUT(Context *c, const QString &uuid)
{
    qDebug() << Q_FUNC_INFO << uuid;
    const QJsonDocument doc = c->request()->bodyData().toJsonDocument();
    const QJsonObject obj = doc.object();

    QSettings s;
    s.beginGroup(uuid);
    s.setValue(QStringLiteral("name"), obj.value(QStringLiteral("name")).toString());
    s.setValue(QStringLiteral("age"), obj.value(QStringLiteral("age")).toDouble());
    s.endGroup();
    s.sync();

    if (s.status()) {
        c->response()->setJsonObjectBody({
                                       {QStringLiteral("status"), QStringLiteral("error")},
                                       {QStringLiteral("error"), QStringLiteral("failed")}
                                   });
    } else {
        c->response()->setJsonObjectBody({
                                       {QStringLiteral("status"), QStringLiteral("ok")},
                                       {QStringLiteral("uuid"), uuid}
                                   });
    }
}

//void Service::users_uuid_DELETE(Context *c, const QString &uuid)
//{
//    qDebug() << Q_FUNC_INFO << uuid;
//    QSettings s;
//    bool removed = s.childGroups().contains(uuid);
//    if (removed) {
//        s.remove(uuid);
//        s.sync();
//    }

//    if (!removed || s.status()) {
//        c->response()->setJsonObjectBody({
//                                       {QStringLiteral("status"), QStringLiteral("error")},
//                                       {QStringLiteral("error"), QStringLiteral("failed")}
//                                   });
//    } else {
//        c->response()->setJsonObjectBody({
//                                       {QStringLiteral("status"), QStringLiteral("ok")},
//                                   });
//    }
//}

