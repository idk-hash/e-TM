QT += \
    network \
    widgets \
    mqtt

HEADERS += \
    include/cargomainpage.h \
    include/cargonav.h \
    include/cargoplaceorder.h \
    include/cargovieworders.h \
    include/cargoviewprofile.h \
    include/companymainpage.h \
    include/companynav.h \
    include/companyviewprofile.h \
    include/drivermainpage.h \
    include/drivernav.h \
    include/driverviewprofile.h \
    include/mqttClient.h \
    include/signInPage.h \
    include/signUpPage.h \
    include/welcomePage.h \
    include/process.h \
    include/manager.h \
    include/client.h \
    include/navigationtab.h \
    include/listtab.h \
    include/signupform.h

SOURCES += \
    src/cargomainpage.cpp \
    src/cargonav.cpp \
    src/cargoplaceorder.cpp \
    src/cargovieworders.cpp \
    src/cargoviewprofile.cpp \
    src/companymainpage.cpp \
    src/companynav.cpp \
    src/companyviewprofile.cpp \
    src/drivermainpage.cpp \
    src/drivernav.cpp \
    src/driverviewprofile.cpp \
    src/signupform.cpp \
    src/listtab.cpp \
    src/navigationtab.cpp \
    src/client.cpp \
    src/manager.cpp \
    src/mqttClient.cpp \
    src/signInPage.cpp \
    src/main.cpp \
    src/signUpPage.cpp \
    src/welcomePage.cpp

INCLUDEPATH += \
    headers/ include \

OBJECTS_DIR = $$_PRO_FILE_PWD_/bin/
DESTDIR = $$_PRO_FILE_PWD_/bin/
