#ifndef CARGOVIEWPROFILE_H
#define CARGOVIEWPROFILE_H

#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QLayout>
#include <QLabel>

class cargoViewProfile : public QWidget
{
    Q_OBJECT
public:
    cargoViewProfile(QWidget *widget);
    QWidget *parent;
    QVBoxLayout *layout = new QVBoxLayout;
    QLabel *titleProfile = new QLabel("Your Profile");
    QLabel *nameLabel = new QLabel("Name");
    QLabel *addressLabel = new QLabel("Address");
    QLabel *phoneLabel = new QLabel("Phone Number");
    QLabel *emailLabel = new QLabel("Email");
};

#endif // CARGOVIEWPROFILE_H
