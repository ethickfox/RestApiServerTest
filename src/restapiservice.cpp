#include "restapiservice.h"

#include "root.h"

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

    return true;
}

