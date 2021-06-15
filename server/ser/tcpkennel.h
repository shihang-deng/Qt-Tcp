#ifndef TCPKENNEL_H
#define TCPKENNEL_H

#include <QObject>
#include<QTcpServer>
#include<QTcpSocket>

class TcpKennel
{
public:
    TcpKennel();
    ~TcpKennel();
public:
    QTcpServer* sersock;
    QTcpSocket* clientsock;
    bool startolisten();

signals:
    void beginlisten();
};

#endif // TCPKENNEL_H
