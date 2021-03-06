#ifndef CLIENT_H
#define CLIENT_H

#include <QThread>

#include <QObject>

#include <manager.h>

class client : public QObject
{
    Q_OBJECT

    public:
        client(int w, int h);

    private:
        int width;
        int height;
        QThread processorThread;
        manager *processManager;

        QQueue<Process> processQueue;

    signals:
        void pQueuePending();

    public slots:
        void queueProcess(Process process);

};

#endif // CLIENT_H
