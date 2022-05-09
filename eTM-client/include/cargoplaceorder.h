#ifndef CARGOPLACEORDER_H
#define CARGOPLACEORDER_H

#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QLayout>
#include <QLabel>
#include <QLineEdit>
#include <process.h>

class cargoPlaceOrder : public QWidget
{
    Q_OBJECT
public:
    cargoPlaceOrder(QWidget *widget);
    QWidget *parent;
    QVBoxLayout *layout = new QVBoxLayout;
    QLabel *titlePlaceOrder = new QLabel("Place Order");
    QLabel *sourceLabel = new QLabel("Source");
    QLineEdit *sourceTextBox = new QLineEdit();
    QLabel *destinationLabel = new QLabel("Destination");
    QLineEdit *destinationTextBox = new QLineEdit();
    QLabel *cargoDetailsLabel = new QLabel("Cargo Details");
    QLabel *heightLabel = new QLabel("Cargo Height");
    QLineEdit *heightTextBox = new QLineEdit();
    QLabel *widthLabel = new QLabel("Cargo Width");
    QLineEdit *widthTextBox = new QLineEdit();
    QLabel *depthLabel = new QLabel("Cargo Depth");
    QLineEdit *depthTextBox = new QLineEdit();
    QLabel *weightLabel = new QLabel("Cargo Weight");
    QLineEdit *weightTextBox = new QLineEdit();
    QPushButton *submitOrder = new QPushButton("Place Order");
    /*cargo details
    cargo dimensions
    weight
    conditions - fragile or frozen*/
public slots:
    void submitOrder1();
};


#endif // CARGOPLACEORDER_H
