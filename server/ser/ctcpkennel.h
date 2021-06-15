#ifndef CTCPKENNEL_H
#define CTCPKENNEL_H

#include <QObject>
#include<QTcpServer>
#include<QTcpSocket>
#include<QList>
#include"mythread.h"

class CTcpKennel : public QObject
{
    Q_OBJECT
public:
    explicit CTcpKennel(QObject *parent = nullptr);
public:
    CTcpKennel();
    ~CTcpKennel();
public:
    QTcpServer* sersock;
    QTcpSocket* clientsock;
    bool startolisten();
    void BeginAccept();
    QList<QTcpSocket*>clientlst;
    void onDisconnectd();
    void onSocketReadyRead();
private:
    MyThread mythread;
public slots:
    void onDisClient();
signals:
    void beginlisten();
    void ClientConnected();
    void disconnectedsig();
    void recvdata(QString str);




};

#endif // CTCPKENNEL_H
