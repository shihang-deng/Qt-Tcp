#include "myser.h"
#include "ui_myser.h"

#include<qdebug.h>

MySer::MySer(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MySer)
{
    ui->setupUi(this);
    ui->plainTextEdit->setReadOnly(true);
    serkennel = new CTcpKennel(this);
    MySerInit();



}

void MySer::MySerInit()
{
    connect(ui->START_BTN,&QPushButton::clicked,this,&MySer::start);
    connect(serkennel,&CTcpKennel::beginlisten,this,[=]()
    {
       ui->plainTextEdit->insertPlainText("开始监听");
    });
    connect(serkennel,&CTcpKennel::ClientConnected,this,&MySer::onClientConnected);
    connect(serkennel,&CTcpKennel::disconnectedsig,this,&MySer::onDisconnected);
    connect(serkennel,&CTcpKennel::recvdata,this,&MySer::recvdatashow);
}

void MySer::start()
{
    serkennel->startolisten();

}

void MySer::onClientConnected()
{
    ui->plainTextEdit->appendPlainText("one client connected");
    ui->plainTextEdit->appendPlainText("address"+(serkennel->clientsock->peerAddress().toString())+"\n");
    ui->plainTextEdit->appendPlainText("port"+QString::number(serkennel->clientsock->peerPort())+"\n");
}

void MySer::onDisconnected()
{
    ui->plainTextEdit->appendPlainText("one client disconnected\n");
}

void MySer::recvdatashow(QString str)
{
    ui->plainTextEdit->insertPlainText("in"+str);
}

MySer::~MySer()
{
    delete ui;
}

