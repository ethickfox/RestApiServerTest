#ifndef SERVICE_H
#define SERVICE_H

#include <Cutelyst/Controller>
#include <QDebug>
#include <QSettings>
#include <QJsonArray>
#include <QUuid>
#include <QJsonObject>
#include <QJsonDocument>
#include <QNetworkInterface>

#include "version.h"

using namespace Cutelyst;

class Service : public Controller
{
    Q_OBJECT
public:
    explicit Service(QObject *parent = nullptr);
    ~Service();

//main
    C_ATTR(index, :Path :AutoArgs)
    void index(Context *c);

//ports
    C_ATTR(ports, :Local :AutoArgs :ActionClass(REST))
    void ports(Context *c);

    C_ATTR(ports_GET, :Private)
    void ports_GET(Context *c);

    C_ATTR(ports_uuid, :Path('ports') :AutoArgs :ActionClass(REST))
    void ports_uuid(Context *c, const QString &uuid);

    C_ATTR(ports_uuid_GET, :Private)
    void ports_uuid_GET(Context *c, const QString &uuid);

//version
    C_ATTR(version, :Local :AutoArgs :ActionClass(REST))
    void version(Context *c);

    C_ATTR(version_GET, :Private)
    void version_GET(Context *c);

    C_ATTR(users_POST, :Private)
    void version_POST(Context *c);
};

#endif //SERVICE_H

