#include "cargovieworders.h"

cargoViewOrders::cargoViewOrders(QWidget *widget)
{
    this->setParent(widget);
    widget->setContentsMargins(0,0,0,0);
    this->setLayout(layout);
    titleOrders->setStyleSheet("border-bottom: 2px; border-color: green; font-size: 20px;");
    layout->setContentsMargins(10,10,10,10);
    layout->addWidget(titleOrders);
    layout->addWidget(orderNo);
    layout->addWidget(orderStatus);
    layout->insertStretch( -1, 1 );
}

