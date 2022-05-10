#include <signupform.h>

#include <QDebug>
#include <QString>
#include <vector>
#include <string>

signUpForm::signUpForm(QWidget *widget, int formID, int w, int h)
    {wWidth = w;
     wHeight = h;
     this->setParent(widget);
     this->setGeometry(w/20,h*3/20,w*23/40,h*19/20);
     for (const field &currentField : formDetails[formID])
        {switch(currentField.fieldType)
            {case string:
                {QLineEdit *aLineEdit = new QLineEdit;
                 aLineEdit->setFixedSize(wWidth*23/40,wHeight/20);
                 aLineEdit->setAlignment(Qt::AlignHCenter);
                 aLineEdit->setPlaceholderText(QString::fromStdString("Enter your " + currentField.name));
                 aLineEdit->setStyleSheet("QLineEdit { border-radius: 7px; background-color : white;}");
                 layout->addWidget(aLineEdit);
                 layout->addSpacing(20);
                 break;}
             case email:
                 {QLineEdit *aLineEdit = new QLineEdit;
                  aLineEdit->setFixedSize(wWidth*23/40,wHeight/20);
                  aLineEdit->setAlignment(Qt::AlignHCenter);
                  aLineEdit->setPlaceholderText(QString::fromStdString("Enter your " + currentField.name));
                  aLineEdit->setStyleSheet("QLineEdit { border-radius: 7px; background-color : white;}");
                  layout->addWidget(aLineEdit);
                  layout->addSpacing(20);
                  break;}
             case password:
                 {QLineEdit *aLineEdit = new QLineEdit;
                  aLineEdit->setFixedSize(wWidth*23/40,wHeight/20);
                  aLineEdit->setAlignment(Qt::AlignHCenter);
                  aLineEdit->setPlaceholderText(QString::fromStdString("Enter your " + currentField.name));
                  aLineEdit->setStyleSheet("QLineEdit { border-radius: 7px; background-color : white;}");
                  layout->addWidget(aLineEdit);
                  layout->addSpacing(20);
                  break;}
             case date:
                 {QLineEdit *aLineEdit = new QLineEdit;
                  aLineEdit->setFixedSize(wWidth*23/40,wHeight/20);
                  aLineEdit->setAlignment(Qt::AlignHCenter);
                  aLineEdit->setPlaceholderText(QString::fromStdString("Enter your " + currentField.name));
                  aLineEdit->setStyleSheet("QLineEdit { border-radius: 7px; background-color : white;}");
                  layout->addWidget(aLineEdit);
                  layout->addSpacing(20);
                  break;}
             case confirm:
                 {QLineEdit *aLineEdit = new QLineEdit;
                  aLineEdit->setFixedSize(wWidth*23/40,wHeight/20);
                  aLineEdit->setAlignment(Qt::AlignHCenter);
                  aLineEdit->setPlaceholderText(QString::fromStdString("Confirm your " + currentField.name));
                  aLineEdit->setStyleSheet("QLineEdit { border-radius: 7px; background-color : white;}");
                  layout->addWidget(aLineEdit);
                  layout->addSpacing(20);
                  break;}
             case checkbox: break;
        }}

      submit->setText("Submit");
      submit->setStyleSheet("background-color: white;");
       submit->setFixedWidth(100);
        submit->setFixedHeight(40);
      layout->addWidget(submit);
      layout->setContentsMargins(0,0,0,0);
       layout->setAlignment(submit, Qt::AlignHCenter);
      groupBox->setStyleSheet("border: 0px solid black;");
      groupBox->setLayout(layout);
      scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
      scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
      scrollArea->resize(w*23/40,h/2);
      scrollArea->setStyleSheet("background-color: transparent; border-width: 10px;");
      scrollArea->setFrameShape(QFrame::NoFrame);
//    scrollArea->setFocusProxy(this);
      scrollArea->setWidget(groupBox);
    this->show();
    //connect(submit, &QPushButton::clicked, this, &signUpForm::submitForm);
    }

/*void signUpForm::submitForm()
{std::string text = "";
    std::vector<std::string> fields  = {"010"};
    for(int i = 0; i < layout->count()-1; i++)
        {QWidget *widget = layout->itemAt(i)->widget();
        if(widget != NULL)
            {QLineEdit *aLineEdit = qobject_cast<QLineEdit *>(widget);
            //qDebug() << aLineEdit->text();
            text = aLineEdit->text().QString::toStdString();
            fields.push_back(text);
        }
        else{
            qDebug()  << "Please fill in all fields";
            break;
        }
    }
    int length = fields.size();
    for (int i = 0; i < length; i++){
         //qDebug() << QString::fromStdString(fields[i]);
    }
    Process process = {{'8','0','0'}, fields};

}
*/
