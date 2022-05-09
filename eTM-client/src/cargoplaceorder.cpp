#include "cargoplaceorder.h"
#include <QDebug>
#include <QString>
#include <vector>
#include <string>

cargoPlaceOrder::cargoPlaceOrder(QWidget *widget)
{
    this->setParent(widget);
    widget->setContentsMargins(0,0,0,0);
    this->setLayout(layout);
    titlePlaceOrder->setStyleSheet("border-bottom: 2px; border-color: green; font-size: 20px;");
    cargoDetailsLabel->setStyleSheet("border-bottom: 2px; border-color: green; font-size: 20px;");
    layout->setContentsMargins(10,10,10,10);
    submitOrder->setMaximumWidth(100);
    layout->addWidget(titlePlaceOrder);
    layout->addWidget(sourceLabel);
    layout->addWidget(sourceTextBox);
    layout->addWidget(destinationLabel);
    layout->addWidget(destinationTextBox);
    layout->addWidget(cargoDetailsLabel);
    layout->addWidget(heightLabel);
    layout->addWidget(heightTextBox);
    layout->addWidget(widthLabel);
    layout->addWidget(widthTextBox);
    layout->addWidget(depthLabel);
    layout->addWidget(depthTextBox);
    layout->addWidget(weightLabel);
    layout->addWidget(weightTextBox);
    layout->addWidget(submitOrder);
    layout->setAlignment(submitOrder, Qt::AlignHCenter);
    //layout->insertStretch( -1, 1);
    connect(submitOrder, &QPushButton::clicked, this, &cargoPlaceOrder::submitOrder1);
}

void cargoPlaceOrder::submitOrder1(){
    Process process = {{'8','0','0'}, {"001", sourceTextBox->text().toStdString(), destinationTextBox->text().toStdString(), heightTextBox->text().toStdString(), widthTextBox->text().toStdString(), depthTextBox->text().toStdString()}};
    qDebug() << sourceTextBox->text();
    qDebug() << destinationTextBox->text();
    qDebug() << heightTextBox->text();
    qDebug() << widthTextBox->text();
    qDebug() << depthTextBox->text();
    qDebug() << weightTextBox->text();
    if (sourceTextBox->text().length()>10){
        qDebug() << "Source length too long";
    }
    else if (sourceTextBox->text() == NULL){
        qDebug() << "Please enter a source";
    }
    else if (destinationTextBox->text().length()>10){
        qDebug() << "Destination length too long";
    }
    else if (destinationTextBox->text() == NULL){
        qDebug() << "Please enter a destination";
    }


}
