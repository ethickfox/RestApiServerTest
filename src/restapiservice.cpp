#include "restapiservice.h"

//#include "root.h"
#include "apiv1.h"

using namespace Cutelyst;

RestAPIService::RestAPIService(QObject *parent) : Application(parent)
{
}

RestAPIService::~RestAPIService()
{
}

bool RestAPIService::init()
{
//    new Root(this);
    new ApiV1 (this);
    return true;
}

