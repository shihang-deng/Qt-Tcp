#ifndef MYSER_H
#define MYSER_H

#include <QDialog>
#include"ctcpkennel.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MySer; }
QT_END_NAMESPACE

class MySer : public QDialog
{
    Q_OBJECT

public:
    MySer(QWidget *parent = nullptr);
    ~MySer();
    void start();
    CTcpKennel * serkennel;
    void test();
    void onClientConnected();
    void onDisconnected();
    void recvdatashow(QString str);

private:
    void MySerInit();

private:
    Ui::MySer *ui;
};
#endif // MYSER_H
