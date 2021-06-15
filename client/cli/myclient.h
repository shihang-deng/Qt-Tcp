#ifndef MYCLIENT_H
#define MYCLIENT_H

#include <QDialog>
#include<QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class MyClient; }
QT_END_NAMESPACE

class MyClient : public QDialog
{
    Q_OBJECT

public:
    MyClient(QWidget *parent = nullptr);
    ~MyClient();

private:
    QTcpSocket *socket ;

private slots:
    void on_pushButton_clicked();
    void on_send_btn_clicked();

private:
    Ui::MyClient *ui;
};
#endif // MYCLIENT_H
