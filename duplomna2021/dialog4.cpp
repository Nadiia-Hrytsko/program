#include "dialog4.h"
#include "ui_dialog4.h"
#include "QtSql/QSqlDatabase"
#include "QSqlQuery"

Dialog4::Dialog4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog4)
{
    ui->setupUi(this);
}

Dialog4::~Dialog4()
{
    delete ui;
}

void Dialog4::on_pushButton_clicked()
{
    float  a1, a2, a3, a4, x,
           b1, b2, b3, b4, y,
           c1, c2, c3, c4, z,
           d1, d2, d3, d4, n,
           i1, i2, i3, i4, m;

     //Зчитуєм дані з першої альтернативи A1
     std :: vector < QLineEdit *> lineEdits = { ui->lineEdit_5, ui->lineEdit_4, ui->lineEdit_6 , ui->lineEdit_2};
     std :: vector <double> values ;

          //Зчитуєм значення із першого lineEdit
          QString S1 = ui->lineEdit_5->text();
          //Переводим значення в число
          a1 = S1.toFloat();

          QString S2 = ui->lineEdit_4->text();
          a2 = S2.toFloat();

          QString S3 = ui->lineEdit_6->text();
          a3 = S3.toFloat();

          QString S4 = ui->lineEdit_2->text();
          a4 = S4.toFloat();
          // Спробуємо отримати значення з усіх полів введення, якщо текст в них можливо конвертувати в число
          for ( const QLineEdit * lineEdit : lineEdits )
            {
                bool ok = false ;
                double value = lineEdit -> text (). toDouble (& ok );
                if ( ok )
                {
                    values . push_back ( value );
                }
            }
          //Перевірка на наявність значень альтернативи
          if ( values.empty ())
          {
              // Якщо поле пусте, то встановлюємо в поле результату значення Nan
              ui->lineEdit_31 -> setText ( "Nan" );
          }
          else
          {
              //Рахуєм середній очікуваний дохід для першої альтернативи
              x=a1*a2+a3*a4;
              //Виводимо результат
              ui->lineEdit_31->setText(QString::number(x));
          }

      //Зчитуєм дані з другої альтернативи A2
      std :: vector < QLineEdit *> lineEdits1 = { ui->lineEdit_7, ui->lineEdit_8, ui->lineEdit_9 , ui->lineEdit_10};
      std :: vector <double> values1 ;


          QString S11 = ui->lineEdit_7->text();
          b1 = S11.toFloat();

          QString S12 = ui->lineEdit_8->text();
          b2 = S12.toFloat();

          QString S13 = ui->lineEdit_9->text();
          b3 = S13.toFloat();

          QString S14 = ui->lineEdit_10->text();
          b4 = S14.toFloat();

          for ( const QLineEdit * lineEdit : lineEdits1 )
            {
                bool ok = false ;
                double value = lineEdit -> text (). toDouble (& ok );
                if ( ok )
                {
                    values1 . push_back ( value );
                }
            }
          if ( values1 . empty ())
          {
              ui -> lineEdit_32 -> setText ( "Nan" );
          }
          else
          {   //Рахуєм середній очікуваний дохід для другої альтернативи
              y=b1*b2+b3*b4;
              //Виводимо результат
              ui->lineEdit_32->setText(QString::number(y));
          }


      //Зчитуєм дані з третьої альтернативи A3
      std :: vector < QLineEdit *> lineEdits2 = { ui->lineEdit_13, ui->lineEdit_14, ui->lineEdit_15 , ui->lineEdit_16};
      std :: vector <double> values2 ;

          QString S16 = ui->lineEdit_13->text();
          c1 = S16.toFloat();

          QString S17 = ui->lineEdit_14->text();
          c2 = S17.toFloat();

          QString S18 = ui->lineEdit_15->text();
          c3 = S18.toFloat();

          QString S19 = ui->lineEdit_16->text();
          c4 = S19.toFloat();

          for ( const QLineEdit * lineEdit : lineEdits2 )
            {
                bool ok = false ;
                double value = lineEdit -> text (). toDouble (& ok );
                if ( ok )
                {
                    values2 . push_back ( value );
                }
            }
          if ( values2 . empty ())
          {
              ui -> lineEdit_30 -> setText ( "Nan" );
          }
          else
          {
              //Рахуєм середній очікуваний дохід для третьої альтернативи
              z=c1*c2+c3*c4;
              //Виводимо результат
              ui->lineEdit_30->setText(QString::number(z));
          }

       //Зчитуєм дані з четвертої альтернативи A4
       std :: vector < QLineEdit *> lineEdits3 = { ui->lineEdit_19, ui->lineEdit_20, ui->lineEdit_21 , ui->lineEdit_22};
       std :: vector <double> values3 ;

          QString S21 = ui->lineEdit_19->text();
          d1 = S21.toFloat();

          QString S22 = ui->lineEdit_20->text();
          d2 = S22.toFloat();

          QString S23 = ui->lineEdit_21->text();
          d3 = S23.toFloat();

          QString S24 = ui->lineEdit_22->text();
          d4 = S24.toFloat();

          for ( const QLineEdit * lineEdit : lineEdits3 )
            {
                bool ok = false ;
                double value = lineEdit -> text (). toDouble (& ok );
                if ( ok )
                {
                    values3 . push_back ( value );
                }
            }

          if ( values3 . empty ())
          {
              ui -> lineEdit_36 -> setText ( "Nan" );
          }
          else
          {
              //Рахуєм середній очікуваний дохід для четвертої альтернативи
              n=d1*d2+d3*d4;
              //Виводимо результат
              ui->lineEdit_36->setText(QString::number(n));
          }

       //Зчитуєм дані з п'ятої альтернативи A5
       std :: vector < QLineEdit *> lineEdits4 = { ui->lineEdit_25, ui->lineEdit_26, ui->lineEdit_27 , ui->lineEdit_28};
       std :: vector <double> values4 ;

          QString S26 = ui->lineEdit_25->text();
          i1 = S26.toFloat();

          QString S27 = ui->lineEdit_26->text();
          i2 = S27.toFloat();

          QString S28 = ui->lineEdit_27->text();
          i3 = S28.toFloat();

          QString S29 = ui->lineEdit_28->text();
          i4 = S29.toFloat();

          for ( const QLineEdit * lineEdit : lineEdits4 )
            {
                bool ok = false ;
                double value = lineEdit -> text (). toDouble (& ok );
                if ( ok )
                {
                    values4 . push_back ( value );
                }
            }
          if ( values4 . empty ())
          {
              ui -> lineEdit_37 -> setText ( "Nan" );
          }
          else
          {
             //Рахуєм середній очікуваний дохід для п'ятої альтернативи
             m=i1*i2+i3*i4;
             //Виводимо результат
             ui->lineEdit_37->setText(QString::number(m));}
}

void Dialog4::on_pushButton_2_clicked()
{
    std :: vector < QLineEdit *> lineEdits5 = { ui->lineEdit_31, ui->lineEdit_32, ui->lineEdit_30 , ui->lineEdit_36, ui->lineEdit_37 };
    std :: vector <double> values5 ;

    for ( const QLineEdit * lineEdit : lineEdits5 )
      {
          bool ok = false ;
          double value = lineEdit-> text().toDouble(& ok );
          if (ok)
          {
              values5.push_back(value);
          }
      }

           //Знайти максимальне значення
           double max = * std :: max_element ( values5.begin(), values5 . end ());
           ui -> lineEdit_444 -> setText ( QString :: number ( max ));

           //Пошук найкращої альтернативи для інвестування
           if( values5[0] == max ){
               ui -> lineEdit_444 -> setText ( "A1");
           }
           else if(values5[1] == max){
               ui -> lineEdit_444 -> setText ( "A2");
           }
           else if(values5[2] == max){
               ui -> lineEdit_444 -> setText ( "A3");
           }
           else if(values5[3] == max){
               ui -> lineEdit_444 -> setText ( "A4");
           }
           else if(values5[4] == max){
               ui -> lineEdit_444 -> setText ( "A5");
           }
}

void Dialog4::on_pushButton_7_clicked()
{
    //Підключення бази даних
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:\\Users\\nadia\\database2021.db");
    db.open();
    QSqlQuery query = QSqlQuery (db);
    query.prepare ( "INSERT INTO  'Losses_and_gains' (Result_4) VALUES (:Result_4)");
    QString str1 = ui-> lineEdit_444-> text ();
    query.addBindValue (str1);
    query.exec ();
}
