#ifndef DRIVERMAINPAGE_H
#define DRIVERMAINPAGE_H

#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QLayout>

#include "drivernav.h"
#include "driverviewprofile.h"

class driverMainPage : public QWidget
{
    Q_OBJECT
public:
    driverMainPage(QWidget *widget);
    QGridLayout *layout2 = new QGridLayout();
    driverNav *driverNavi = new driverNav(this);
    driverViewProfile *driverViewProfile1 = new driverViewProfile(this);
};

#endif // DRIVERMAINPAGE_H
