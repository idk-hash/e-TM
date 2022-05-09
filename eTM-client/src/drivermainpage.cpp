#include "drivermainpage.h"

driverMainPage::driverMainPage(QWidget *widget)
{
    this->setParent(widget);
    this->setLayout(layout2);
    layout2->setAlignment(driverNavi, Qt::AlignTop);
    layout2->setContentsMargins(10,10,10,10);    driverNavi->setContentsMargins(0,0,0,0);
    driverNavi->setFixedHeight(480);
    driverNavi->setFixedWidth(100);
    driverViewProfile1->setFixedWidth(375);
    driverViewProfile1->setFixedHeight(480);
    QPalette pal  = QPalette();
    pal.setColor(QPalette::Window, Qt::white);
    driverViewProfile1->setPalette(pal);
    driverViewProfile1->setAutoFillBackground(true);
    layout2->addWidget(driverNavi, 0,0);
    layout2->addWidget(driverViewProfile1, 0, 1, Qt::AlignRight);

}

