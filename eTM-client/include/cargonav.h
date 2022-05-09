#ifndef CARGONAV_H
#define CARGONAV_H

#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QLayout>
#include <QVBoxLayout>

class cargoNav : public QWidget
{
    Q_OBJECT
public:
    cargoNav(QWidget *widget);
    QWidget *parent;
    QVBoxLayout *layout = new QVBoxLayout;
    QPushButton *viewOrder = new QPushButton("View Orders");
    QPushButton *placeOrder = new QPushButton("Place Order");
    QPushButton *viewProfile = new QPushButton("View Profile");
    QPushButton *logoutButton = new QPushButton("Logout");
};

#endif // CARGONAV_H

