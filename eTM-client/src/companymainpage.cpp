#include "companymainpage.h"

companyMainPage::companyMainPage(QWidget *widget)
{
    this->setParent(widget);
    this->setLayout(layout2);
    layout2->setAlignment(companyNavi, Qt::AlignTop);
    layout2->setContentsMargins(10,10,10,10);
    companyNavi->setContentsMargins(0,0,0,0);
    companyNavi->setFixedHeight(480);
    companyNavi->setFixedWidth(100);
    companyViewProfile1->setFixedWidth(375);
    companyViewProfile1->setFixedHeight(480);
    QPalette pal  = QPalette();
    pal.setColor(QPalette::Window, Qt::white);
    companyViewProfile1->setPalette(pal);
    companyViewProfile1->setAutoFillBackground(true);
    layout2->addWidget(companyNavi, 0,0);
    layout2->addWidget(companyViewProfile1, 0, 1, Qt::AlignRight);
}
