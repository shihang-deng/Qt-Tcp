#include "ctcpkennel.h"
#include"myser.h"
#include<qdebug.h>
#include<QThread>

CTcpKennel::CTcpKennel(QObject *parent) : QObject(parent)
{
    sersock = new QTcpServer;
//    connect(clientsock,&QTcpSocket::connected,this,
    connect(sersock,&QTcpServer::newConnection,this, &CTcpKennel::BeginAccept);

}



CTcpKennel::~CTcpKennel()
{
    if(sersock)
    {
        sersock->close();
        delete  sersock;
    }
    sersock = NULL;
}

bool CTcpKennel::startolisten()
{
   QHostAddress addr("0.0.0.0");
   bool isok = sersock->listen(QHostAddress::Any,8899);
   if(isok)
   {
       emit beginlisten();

   }
   mythread.start();

   return isok;
}

void CTcpKennel::onDisconnectd()
{
    clientsock->close();
    delete clientsock;
    clientsock = NULL;
}

void CTcpKennel::onDisClient()
{
    emit disconnectedsig();
}

void CTcpKennel::BeginAccept()
{
    qDebug("con");
    clientsock = sersock->nextPendingConnection();
    clientlst.push_back(clientsock);
    //connect(clientsock,SIGNAL(connected()),this,SLOT(onClient()));
    connect(clientsock,&QTcpSocket::disconnected,this,&CTcpKennel::onDisClient);
    connect(clientsock,&QTcpSocket::readyRead,this,&CTcpKennel::onSocketReadyRead);
    emit ClientConnected();

}

void CTcpKennel::onSocketReadyRead()
{
    while(clientsock->canReadLine())
    {
        QString str = clientsock->readLine();
        emit recvdata(str);
    }
}






