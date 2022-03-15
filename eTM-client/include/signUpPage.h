#ifndef SIGNUPPAGE_H
#define SIGNUPPAGE_H

#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QBoxLayout>

class signUpPage : public QWidget
{
    Q_OBJECT

    public:
        signUpPage(QWidget *widget);
        QPushButton *switchButton = new QPushButton("Sign In");

    private:
        QWidget *Parent;
        QGridLayout *layout = new QGridLayout;
        QPushButton *driverButton = new QPushButton("Driver");
        QPushButton *cargoOwnerButton = new QPushButton("Cargo Owner");
        QPushButton *companyButton = new QPushButton("Transportation Company");
};

#endif // SIGNUPPAGE_H