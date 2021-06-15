#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include<QThread>

class MyThread : public QThread
{
    Q_OBJECT
public:
    MyThread();

protected:
    void run() override; //重写run函数
public:
    void threadBegin();
    void threadPause();
    void threadStop();
private:
    bool m_pause;
    bool m_stop;
};

#endif // MYTHREAD_H
