#ifndef CARGOVIEWORDERS_H
#define CARGOVIEWORDERS_H

#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QLayout>
#include <QLabel>

class cargoViewOrders : public QWidget
{
    Q_OBJECT
public:
    cargoViewOrders(QWidget *widget);
    QWidget *parent;
    QVBoxLayout *layout = new QVBoxLayout;
    QLabel *titleOrders = new QLabel("Your Orders");
    QLabel *orderNo = new QLabel("Order Number");
    QLabel *orderStatus = new QLabel("Order Status");

};

#endif // CARGOVIEWORDERS_H
