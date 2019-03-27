#ifndef SERVICE_H
#define SERVICE_H

#include <Cutelyst/Controller>
#include <QDebug>
#include <QSettings>
#include <QJsonArray>
#include <QUuid>
#include <QJsonObject>
#include <QJsonDocument>
#include <QtSerialPort/QSerialPortInfo>


using namespace Cutelyst;

class Service : public Controller
{
    Q_OBJECT
public:
    explicit Service(QObject *parent = nullptr);
    ~Service();

    C_ATTR(users, :Local :AutoArgs :ActionClass(REST))
    void users(Context *c);

    C_ATTR(users_GET, :Private)
    void users_GET(Context *c);

    C_ATTR(users_POST, :Private)
    void users_POST(Context *c);

    C_ATTR(users_uuid, :Path('users') :AutoArgs :ActionClass(REST))
    void users_uuid(Context *c, const QString &uuid);

    C_ATTR(users_uuid_GET, :Private)
    void users_uuid_GET(Context *c, const QString &uuid);

    C_ATTR(users_uuid_PUT, :Private)
    void users_uuid_PUT(Context *c, const QString &uuid);

    C_ATTR(users_uuid_DELETE, :Private)
    void users_uuid_DELETE(Context *c, const QString &uuid);
};

#endif //Service_H

