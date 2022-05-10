#ifndef WELCOMEPAGE_H
#define WELCOMEPAGE_H

#include <QObject>
#include <QWidget>
#include <QPushButton>

#include <signInPage.h>
#include <signUpPage.h>
#include <signupform.h>
#include <navigationtab.h>
#include "cargonav.h"
#include "cargomainpage.h"
#include "drivermainpage.h"
#include "drivernav.h"
#include "companymainpage.h"
#include "companynav.h"
#include "companyviewprofile.h"

#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include <QParallelAnimationGroup>
#include <QSequentialAnimationGroup>

class welcomePage : public QWidget
{
    Q_OBJECT

    private:
        const int wWidth = 300;
        const int wHeight = 400;
        int rWidth;
        int rHeight;
        QLabel *div = new QLabel(this);
        QLabel *logo_label = new QLabel(this);

    public:
        welcomePage(int w, int h);
        signInPage *signIn = new signInPage(this, QSize(wWidth, wHeight));
        signUpPage *signUp = new signUpPage(this, QSize(wWidth, wHeight));
        cargoMainPage *cargoMain = new cargoMainPage(this);
        driverMainPage *driverMain = new driverMainPage(this);
        companyMainPage *companyMain = new companyMainPage(this);
        navigationTab *navTab;
        signUpForm *signupform2;
        //= new signUpForm(this, 1, wWidth, wHeight);
        bool switchFlag = false;

    public slots:
        void errorMessage(QString error);
       // void submitForm();
        void switchTab();
        void signInSuccess(int type);
        void signingUp(int formID);
        void signInAccount(int type);
        void logout();
        void logout2();
        void logout3();
        void createAccount();
};

#endif // WELCOMEPAGE_H

