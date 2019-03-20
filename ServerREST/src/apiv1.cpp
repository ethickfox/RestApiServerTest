#include "apiv1.h"

using namespace Cutelyst;

ApiV1::ApiV1(QObject *parent) : Controller(parent)
{

}

ApiV1::~ApiV1()
{
}

void ApiV1::index(Context *c)
{
    c->response()->body() = "Matched Controller::ApiV1 in ApiV1.";
}

void  ApiV1 :: users_GET (Context * c)
{
    QSettings s;
    const QStringList uuids = s. childGroups ();
    c-> response () -> setJsonArrayBody ( QJsonArray :: fromStringList (uuids));
}

void ApiV1::users_POST(Context *c)
{
    QStringList list = {{"meme"}};
     c-> response () -> setJsonArrayBody (QJsonArray :: fromStringList(list));
}
