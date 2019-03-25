#ifndef RESTAPISERVICE_H
#define RESTAPISERVICE_H

#include <Cutelyst/Application>

using namespace Cutelyst;

class RestAPIService : public Application
{
    Q_OBJECT
    CUTELYST_APPLICATION(IID "RestAPIService")
public:
    Q_INVOKABLE explicit RestAPIService(QObject *parent = nullptr);
    ~RestAPIService();

    bool init();
};

#endif //RESTAPISERVICE_H

