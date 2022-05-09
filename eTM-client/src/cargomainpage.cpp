#include "cargomainpage.h"

cargoMainPage::cargoMainPage(QWidget *widget)
{
    this->setParent(widget);
    this->setLayout(layout2);
    layout2->setAlignment(cargoNavi, Qt::AlignTop);
    layout2->setContentsMargins(10,10,10,10);
    cargoNavi->setContentsMargins(0,0,0,0);
    cargoMainPage2->setContentsMargins(0,0,0,0);
    cargoMainPage3->setContentsMargins(0,0,0,0);
    cargoNavi->setFixedWidth(100);
    cargoMainPage2->setFixedWidth(375);
    cargoMainPage2->setFixedHeight(480);
    QPalette pal  = QPalette();
    pal.setColor(QPalette::Window, Qt::white);
    cargoMainPage2->setPalette(pal);
    cargoMainPage3->setPalette(pal);
    cargoPlaceOrder1->setPalette(pal);
    layout2->addWidget(cargoNavi, 0,0);
    layout2->addWidget(cargoMainPage2, 0, 1, Qt::AlignRight);
    layout2->addWidget(cargoMainPage3, 0, 1);
    layout2->addWidget(cargoPlaceOrder1, 0, 1);
    cargoPlaceOrder1->setVisible(false);
    cargoMainPage3->setVisible(false);
    cargoMainPage3->setAutoFillBackground(true);
    cargoMainPage2->setAutoFillBackground(true);
    cargoPlaceOrder1->setAutoFillBackground(true);
    connect(cargoNavi->viewOrder,  &QPushButton::clicked, this, &cargoMainPage::viewOrders);
    connect(cargoNavi->viewProfile,  &QPushButton::clicked, this, &cargoMainPage::viewProfile);
    connect(cargoNavi->placeOrder,  &QPushButton::clicked, this, &cargoMainPage::placeOrder);
}

void cargoMainPage::viewProfile(){
    cargoMainPage3->setVisible(false);
    cargoPlaceOrder1->setVisible(false);
    cargoMainPage2->setVisible(true);
}

void cargoMainPage::viewOrders(){
    cargoMainPage2->setVisible(false);
    cargoPlaceOrder1->setVisible(false);
    cargoMainPage3->setVisible(true);
}

void cargoMainPage::placeOrder(){
    cargoMainPage2->setVisible(false);
    cargoMainPage3->setVisible(false);
    cargoPlaceOrder1->setVisible(true);
}

