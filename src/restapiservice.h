#ifndef RESTAPISERVICE_H
#define RESTAPISERVICE_H

#include <Cutelyst/Application>


#include "root.h"
#include "service.h"

using namespace Cutelyst;

class RestAPIService : public Application
{
    Q_OBJECT
    CUTELYST_APPLICATION(IID "RestAPIService")
public:
    Q_INVOKABLE explicit RestAPIService(QObject *parent = nullptr);
    ~RestAPIService();

    bool init() override final;
};

#endif //RESTAPISERVICE_H

