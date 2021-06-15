#include "myclient.h"
#include "ui_myclient.h"
#include<qdebug.h>
#include<iostream>

MyClient::MyClient(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MyClient)
{
    ui->setupUi(this);
}

MyClient::~MyClient()
{
    delete ui;
}


void MyClient::on_pushButton_clicked()
{
    socket = new QTcpSocket(this);
    socket->connectToHost("127.0.0.1",8899);
    if(socket->waitForConnected((1000)))
    {
        qDebug("连接成功");
    }
}


void MyClient::on_send_btn_clicked()
{
    QString sendStr =ui->send_text->toPlainText();
    ui->show_text->appendPlainText("out:"+sendStr);
    ui->send_text->clear();
    ui->send_text->setFocus();
    QByteArray str = sendStr.toUtf8();
    str.append('\n');
    socket->write(str);
}
