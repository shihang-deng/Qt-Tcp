#include "mythread.h"
#include<qdebug.h>

MyThread::MyThread()
{
    m_stop = true;
    m_pause = true;
}

void MyThread::threadBegin()
{
    m_pause = false;
}

void MyThread::threadPause()
{
    m_pause = true;
}

void MyThread::threadStop()
{
    m_stop = true;
}

void MyThread::run()
{
    m_stop = false;
    m_pause = false;
    while(!m_pause)
    {
        if(!m_pause)
        {
            qDebug("1");
        }
        msleep(100);
    }

}
