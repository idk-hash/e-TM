#include "driverviewprofile.h"

driverViewProfile::driverViewProfile(QWidget *widget)
{
    this->setParent(widget);
    widget->setContentsMargins(0,0,0,0);
    this->setLayout(layout);
    titleProfile->setStyleSheet("border-bottom: 2px; border-color: green; font-size: 20px;");
    layout->setContentsMargins(10,10,10,10);
    layout->addWidget(titleProfile);
    layout->insertStretch( -1, 1 );
}
