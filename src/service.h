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

//interface
    C_ATTR(interfaces, :Local :AutoArgs :ActionClass(REST))
    void interfaces(Context *c);

    C_ATTR(interfaces_GET, :Private)
    void interfaces_GET(Context *c);

    C_ATTR(interfaces_uuid, :Path('interfaces') :AutoArgs :ActionClass(REST))
    void interfaces_uuid(Context *c, const QString &uuid);

    C_ATTR(interfaces_uuid_GET, :Private)
    void interfaces_uuid_GET(Context *c, const QString &uuid);

//version
    C_ATTR(version, :Local :AutoArgs :ActionClass(REST))
    void version(Context *c);

    C_ATTR(version_GET, :Private)
    void version_GET(Context *c);

    C_ATTR(users_POST, :Private)
    void version_POST(Context *c);
};

#endif //SERVICE_H

