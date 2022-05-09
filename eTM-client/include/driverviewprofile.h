#ifndef DRIVERVIEWPROFILE_H
#define DRIVERVIEWPROFILE_H

#include <QObject>
#include <QWidget>
#include <QLayout>
#include <QLabel>

class driverViewProfile : public QWidget
{
    Q_OBJECT
public:
    driverViewProfile(QWidget *widget);
    QWidget *parent;
    QVBoxLayout *layout = new QVBoxLayout;
    QLabel *titleProfile = new QLabel("Your Profile");
};

#endif // DRIVERVIEWPROFILE_H
