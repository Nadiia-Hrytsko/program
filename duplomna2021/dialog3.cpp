#include "dialog3.h"
#include "ui_dialog3.h"
#include "QtSql/QSqlDatabase"
#include "QSqlQuery"
#include <QMessageBox>

Dialog3::Dialog3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog3)
{
    ui->setupUi(this);
}

Dialog3::~Dialog3()
{
    delete ui;
}

void Dialog3::on_pushButton_2_clicked()
{
    float  z1, a1, a2, a3, a4, a5, x,
           b1, b2, b3, b4, b5, y,
           c1, c2, c3, c4, c5, z,
           d1, d2, d3, d4, d5, n,
           i1, i2, i3, i4, i5, m;

    //ЙМОВІРНОСТІ
     std :: vector < QLineEdit *> lineEdits_1 = { ui->lineEdit_5};
     std :: vector <double> values_1 ;

     QString S6 = ui->lineEdit_5->text();
     z1 = S6.toFloat();
           // Спробуємо отримати значення з усіх полів введення, якщо текст в них можливо конвертувати в число
           for ( const QLineEdit * lineEdit : lineEdits_1 )
             {
                 bool ok = false ;
                 double value = lineEdit -> text (). toDouble (& ok );
                 if ( ok )
                 {
                     values_1 . push_back ( value );
                 }
             }
           //Перевірка на наявність значень ймовірності
           if ( values_1.empty ())
           {
               QMessageBox::warning(this, "Показники", "Введіть значення показника ймовірності!");
               ui->lineEdit_12->setText ( "Nan" );
           }
           else{}

    //Зчитуєм дані з першої альтернативи A1
    std :: vector < QLineEdit *> lineEdits = { ui->lineEdit_2, ui->lineEdit_3, ui->lineEdit_6 , ui->lineEdit_4, ui->lineEdit};
    //Створюємо вектор для збереження значень з поле введення
    std :: vector <double> values ;
       //Зчитуєм значення із першого lineEdit
       QString S1 = ui->lineEdit_2->text();
       //Переводим значення в число
       a1 = S1.toFloat();

       QString S2 = ui->lineEdit_3->text();
       a2 = S2.toFloat();

       QString S3 = ui->lineEdit_6->text();
       a3 = S3.toFloat();

       QString S4 = ui->lineEdit_4->text();
       a4 = S4.toFloat();

       QString S5 = ui->lineEdit->text();
       a5 = S5.toFloat();

       for ( const QLineEdit * lineEdit : lineEdits )
         {
             bool ok = false ;
             double value = lineEdit -> text (). toDouble (& ok );
             if ( ok )
             {
                 values . push_back ( value );
             }
         }
       if ( values.empty ())
       {
           // То встановлюємо в поле результату значення Nan
           ui->lineEdit_12 -> setText ( "Nan" );
       }
       else
       {
           //Рахуєм функцію корисності для першої альтернативи
           x=(a1+a2+a3+a4+a5)*z1;
           //Виводимо результат
           ui->lineEdit_12->setText(QString::number(x));}

   //Зчитуєм дані з другої альтернативи A2
   std :: vector < QLineEdit *> lineEdits1 = { ui->lineEdit_7, ui->lineEdit_8, ui->lineEdit_9 , ui->lineEdit_10, ui->lineEdit_11};
   // Створюємо вектор для збереження значень з поле введення
   std :: vector <double> values1;

       QString S11 = ui->lineEdit_7->text();
       b1 = S11.toFloat();

       QString S12 = ui->lineEdit_8->text();
       b2 = S12.toFloat();

       QString S13 = ui->lineEdit_9->text();
       b3 = S13.toFloat();

       QString S14 = ui->lineEdit_10->text();
       b4 = S14.toFloat();

       QString S15 = ui->lineEdit_11->text();
       b5 = S15.toFloat();

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
           // То встановлюємо в поле результату значення Nan
           ui -> lineEdit_18 -> setText ( "Nan" );
       }
       else
       {  //Рахуєм функцію корисності для другої альтернативи
          y=(b1+b2+b3+b4+b5)*z1;
          //Виводимо результат
          ui->lineEdit_18->setText(QString::number(y));}

  //Зчитуєм дані з третьої альтернативи A3
  std :: vector < QLineEdit *> lineEdits2 = { ui->lineEdit_13, ui->lineEdit_14, ui->lineEdit_15 , ui->lineEdit_16, ui->lineEdit_17};
  // Створюємо вектор для збереження значень з поле введення
  std :: vector <double> values2;

       QString S16 = ui->lineEdit_13->text();
       c1 = S16.toFloat();

       QString S17 = ui->lineEdit_14->text();
       c2 = S17.toFloat();

       QString S18 = ui->lineEdit_15->text();
       c3 = S18.toFloat();

       QString S19 = ui->lineEdit_16->text();
       c4 = S19.toFloat();

       QString S20 = ui->lineEdit_17->text();
       c5 = S20.toFloat();

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
           // То встановлюємо в поле результату значення Nan
           ui -> lineEdit_24 -> setText ( "Nan" );
       }
       else
       {
           //Рахуєм функцію корисності для третьої альтернативи
           z=(c1+c2+c3+c4+c5)*z1;
           //Виводимо результат
           ui->lineEdit_24->setText(QString::number(z));}

  //Зчитуєм дані з четвертої альтернативи A4
  std :: vector < QLineEdit *> lineEdits3 = { ui->lineEdit_19, ui->lineEdit_20, ui->lineEdit_21 , ui->lineEdit_22, ui->lineEdit_23};
  // Створюємо вектор для збереження значень з поле введення
  std :: vector <double> values3 ;

       QString S21 = ui->lineEdit_19->text();
       d1 = S21.toFloat();

       QString S22 = ui->lineEdit_20->text();
       d2 = S22.toFloat();

       QString S23 = ui->lineEdit_21->text();
       d3 = S23.toFloat();

       QString S24 = ui->lineEdit_22->text();
       d4 = S24.toFloat();

       QString S25 = ui->lineEdit_23->text();
       d5 = S25.toFloat();

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
           // То встановлюємо в поле результату значення Nan
           ui -> lineEdit_30 -> setText ( "Nan" );
       }
       else
       {
           //Рахуєм функцію корисності для четвертої альтернативи
           n=(d1+d2+d3+d4+d5)*z1;
           //Виводимо результат
           ui->lineEdit_30->setText(QString::number(n));}

  //Зчитуєм дані з першої альтернативи A5
  std :: vector < QLineEdit *> lineEdits4 = { ui->lineEdit_25, ui->lineEdit_26, ui->lineEdit_27 , ui->lineEdit_28, ui->lineEdit_29};
  // Створюємо вектор для збереження значень з поле введення
  std :: vector <double> values4 ;

       QString S26 = ui->lineEdit_25->text();
       i1 = S26.toFloat();

       QString S27 = ui->lineEdit_26->text();
       i2 = S27.toFloat();

       QString S28 = ui->lineEdit_27->text();
       i3 = S28.toFloat();

       QString S29 = ui->lineEdit_28->text();
       i4 = S29.toFloat();

       QString S30 = ui->lineEdit_29->text();
       i5 = S30.toFloat();

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
           // То встановлюємо в поле результату значення Nan
           ui -> lineEdit_31 -> setText ( "Nan" );
       }
       else
       {
           //Рахуєм функцію корисності для п'ятої альтернативи
           m=(i1+i2+i3+i4+i5)*z1;
           //Виводимо результат
           ui->lineEdit_31->setText(QString::number(m));}
}

void Dialog3::on_pushButton_clicked()
{
    std :: vector < QLineEdit *> lineEdits = { ui->lineEdit_12, ui->lineEdit_18, ui->lineEdit_24 , ui->lineEdit_30, ui->lineEdit_31 };
    // Створюємо вектор для збереження значень з поле введення
    std :: vector <double> values ;

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

       // Якщо числа не були знайдені
       if ( values . empty ())
       {
           // То встановлюємо в поле результату значення Nan
           ui -> lineEdit_41 -> setText ( "Nan" );
       }
       else
       {
           //Знайти максимальне значення
           double max = * std :: max_element ( values . begin (), values . end ());
           ui -> lineEdit_41 -> setText ( QString :: number ( max ));

           //Пошук найкращої альтернативи для інвестування
           if( values[0] == max ){
               ui -> lineEdit_41 -> setText ( "A1");
           }
           else if(values[1] == max){
               ui -> lineEdit_41 -> setText ( "A2");
           }
           else if(values[2] == max){
               ui -> lineEdit_41 -> setText ( "A3");
           }
           else if(values[3] == max){
               ui -> lineEdit_41 -> setText ( "A4");
           }
           else if(values[4] == max){
               ui -> lineEdit_41 -> setText ( "A5");
           }
       }
}

void Dialog3::on_pushButton_3_clicked()
{
    //Підключення бази даних
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:\\Users\\nadia\\database2021.db");
    db.open();
    QSqlQuery query = QSqlQuery (db);
    query.prepare ( "INSERT INTO  Bernoulli (Result_3) VALUES (:Result_3)");
    QString str1 = ui-> lineEdit_41-> text ();
    query.addBindValue (str1);
    query.exec ();
}
