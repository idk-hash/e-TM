#include "cargonav.h"

cargoNav::cargoNav(QWidget *widget)
{
    this->setParent(widget);
    widget->setContentsMargins(0,0,0,0);
    this->setLayout(layout);
    layout->setAlignment(viewOrder, Qt::AlignTop);
    layout->setContentsMargins(0,0,0,0);
    viewOrder->setContentsMargins(0,0,0,0);
    placeOrder->setContentsMargins(0,0,0,0);
    viewProfile->setContentsMargins(0,0,0,0);
    viewOrder->setStyleSheet("background-color: #90ee90; border-style: solid; border-width: 2px; border-radius: 10px; border-color: white;");
    placeOrder->setStyleSheet("background-color: #90ee90; border-style: solid; border-width: 2px; border-radius: 10px; border-color: white;");
    viewProfile->setStyleSheet("background-color: #90ee90; border-style: solid; border-width: 2px; border-radius: 10px; border-color: white;");
    logoutButton->setStyleSheet("background-color: #90ee90; border-style: solid; border-width: 2px; border-radius: 10px; border-color: white;");
    layout->addWidget(viewOrder, Qt::AlignTop);
    layout->addWidget(placeOrder, Qt::AlignTop);
    layout->addWidget(viewProfile, Qt::AlignTop);
    layout->insertStretch( -2, 1 );
    layout->addWidget(logoutButton, Qt::AlignBottom);
}
