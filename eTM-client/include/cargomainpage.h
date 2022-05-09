#ifndef CARGOMAINPAGE_H
#define CARGOMAINPAGE_H

#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QLayout>
#include <QSpacerItem>

#include "cargonav.h"
#include "cargovieworders.h"
#include "cargoviewprofile.h"
#include "cargoplaceorder.h"

class cargoMainPage : public  QWidget
{
    Q_OBJECT
    public:
        cargoMainPage(QWidget *widget);
        QPushButton *hi = new QPushButton("View Order");
        QGridLayout *layout2 = new QGridLayout();
        cargoNav *cargoNavi = new cargoNav(this);
        cargoViewProfile *cargoMainPage2 = new cargoViewProfile(this);
        cargoViewOrders *cargoMainPage3 = new cargoViewOrders(this);
        cargoPlaceOrder *cargoPlaceOrder1 = new cargoPlaceOrder(this);
    public slots:
        void viewProfile();
        void viewOrders();
        void placeOrder();
};

#endif // CARGOMAINPAGE_H
