#ifndef MANAGER_H
#define MANAGER_H

#include <QObject>
#include <QWidget>
#include <QQueue>
#include <vector>

#include <mqttClient.h>
#include <welcomePage.h>

//#include <process.h>

class manager : public QObject
{
    Q_OBJECT

private:
        int width;
        int height;

        int appID = 0;
        int clientID = 0;
        QString QappID = QString::fromStdString(std::to_string(appID));

        template <class T>
            using vectorDirective = bool(T::*)(std::vector<std::string>);
        template <class T>
            using stringDirective = bool(T::*)(std::string);
        template <class T>
            using intDirective = void(T::*)(int);
        template <class T>
            using VintDirective = void(T::*)(std::vector<int>);

        std::vector<std::vector<vectorDirective<mqttClient>>> mqttDirectives;
        std::vector<std::vector<vectorDirective<manager>>> managerDirectives;

        QQueue<Process> *processQueue;

    public:
        manager(int w, int h, QQueue<Process> *pQueue);

        bool queueFlag = false;

        // ---------
        mqttClient *mqtt = new mqttClient(&appID, &clientID);
        welcomePage *welcome;

        // ---------

    signals:
        void pQueueEmpty();
        void signInFail(QString error);
        void signInSuccess(int type);

    public slots:
        void treatProcess();
        bool setAppID(std::vector<std::string> args);
        bool authValidated(std::vector<std::string> args);
        bool authFailed(std::vector<std::string> args);

};
#endif // MANAGER_H
