#include "drivernav.h"

driverNav::driverNav(QWidget *widget)
{
    this->setParent(widget);
    widget->setContentsMargins(0,0,0,0);
    this->setLayout(layout);
    layout->setAlignment(viewProfile, Qt::AlignTop);
    layout->setContentsMargins(0,0,0,0);
    viewProfile->setContentsMargins(0,0,0,0);
    viewProfile->setStyleSheet("background-color: #90ee90; border-style: solid; border-width: 2px; border-radius: 10px; border-color: white;");
    logoutButton->setStyleSheet("background-color: #90ee90; border-style: solid; border-width: 2px; border-radius: 10px; border-color: white;");
    layout->addWidget(viewProfile, Qt::AlignTop);
    layout->insertStretch( -1, 1 );
    layout->addWidget(logoutButton, Qt::AlignBottom);
}
