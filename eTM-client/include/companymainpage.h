#ifndef COMPANYMAINPAGE_H
#define COMPANYMAINPAGE_H

#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QLayout>

#include "companynav.h"
#include "companyviewprofile.h"

class companyMainPage : public QWidget
{
    Q_OBJECT
public:
    companyMainPage(QWidget *widget);
    QGridLayout *layout2 = new QGridLayout();
    companyNav *companyNavi = new companyNav(this);
    companyViewProfile *companyViewProfile1 = new companyViewProfile(this);
};

#endif // COMPANYMAINPAGE_H
