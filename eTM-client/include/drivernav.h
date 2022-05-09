#ifndef DRIVERNAV_H
#define DRIVERNAV_H

#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QLayout>


class driverNav : public QWidget
{
    Q_OBJECT
public:
    driverNav(QWidget *widget);
    QWidget *parent;
    QVBoxLayout *layout = new QVBoxLayout;
    QPushButton *viewProfile = new QPushButton("View Profile");
    QPushButton *logoutButton = new QPushButton("Logout");
};

#endif // DRIVERNAV_H
