#include "restapiservice.h"


using namespace Cutelyst;

RestAPIService::RestAPIService(QObject *parent) : Application(parent)
{
}

RestAPIService::~RestAPIService()
{
}

bool RestAPIService::init()
{
    new Root(this);
    new Service(this);

    return true;
}

