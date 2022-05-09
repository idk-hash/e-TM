#ifndef COMPANYVIEWPROFILE_H
#define COMPANYVIEWPROFILE_H

#include <QObject>
#include <QWidget>
#include <QLayout>
#include <QLabel>

class companyViewProfile : public QWidget
{
    Q_OBJECT
public:
    companyViewProfile(QWidget *widget);
    QWidget *parent;
    QVBoxLayout *layout = new QVBoxLayout;
    QLabel *titleProfile = new QLabel("Your Profile");
};

#endif // COMPANYVIEWPROFILE_H
