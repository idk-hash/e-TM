#ifndef COMPANYNAV_H
#define COMPANYNAV_H

#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QLayout>

class companyNav : public QWidget
{
    Q_OBJECT
public:
    companyNav(QWidget *widget);
    QWidget *parent;
    QVBoxLayout *layout = new QVBoxLayout;
    QPushButton *viewProfile = new QPushButton("View Profile");
    QPushButton *logoutButton = new QPushButton("Logout");
};

#endif // COMPANYNAV_H
