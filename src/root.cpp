#include "root.h"

using namespace Cutelyst;

Root::Root(QObject *parent) : Controller(parent)
{
}

Root::~Root()
{
}

void Root::index(Context *c)
{
    QByteArray message;
    QList<QNetworkInterface> interfaces =  QNetworkInterface::allInterfaces();
    message.append("<p>Ports:</p>");
    message.append("<ul>");
    for(QNetworkInterface interface: interfaces){
        message.append("<li>" + interface.humanReadableName()+ "</li>");
    }
    message.append("</ul>");
    c->response()->body() = message;
}

void Root::defaultPage(Context *c)
{
    c->response()->body() = "Page not found!";
    c->response()->setStatus(404);
}

