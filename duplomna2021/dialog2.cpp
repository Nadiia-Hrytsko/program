#include "dialog2.h"
#include "ui_dialog2.h"
#include "QtSql/QSqlDatabase"
#include "QSqlQuery"

Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
}

Dialog2::~Dialog2()
{
    delete ui;
}

void Dialog2::on_pushButton_13_clicked()
{
    float  a1, a2, a3, a4, a5, x1,
           z1, z2, z3, z4, z5,
           b1, b2, b3, b4, b5, y1,
           c1, c2, c3, c4, c5, z11,
           d1, d2, d3, d4, d5, n1,
           s1, s2, s3, s4,
           v1, v2, v3, v4,
           k1, k2, k3, k4;

    //ЙМОВІРНОСТІ
    QString S6 = ui->lineEdit_18->text();
    z1 = S6.toFloat();

    QString S7 = ui->lineEdit_16->text();
    z2 = S7.toFloat();

    QString S8 = ui->lineEdit_20->text();
    z3 = S8.toFloat();

    QString S9 = ui->lineEdit_19->text();
    z4 = S9.toFloat();

    QString S10 = ui->lineEdit_17->text();
    z5 = S10.toFloat();

    //Зчитуєм дані з першої альтернативи A1
    std :: vector <QLineEdit*> lineEdits = { ui->lineEdit_3, ui->lineEdit_4, ui->lineEdit , ui->lineEdit_5, ui->lineEdit_2};
    //Створюємо вектор для збереження значень з поле введення
    std :: vector <double> values ;

       //Зчитуєм значення із першого lineEdit
       QString S1 = ui->lineEdit_3->text();
       //Переводим значення в число
       a1 = S1.toFloat();

       QString S2 = ui->lineEdit_4->text();
       a2 = S2.toFloat();

       QString S3 = ui->lineEdit->text();
       a3 = S3.toFloat();

       QString S4 = ui->lineEdit_5->text();
       a4 = S4.toFloat();

       QString S5 = ui->lineEdit_2->text();
       a5 = S5.toFloat();

       // Спробуємо отримати значення з усіх полів введення, якщо текст в них можливо конвертувати в число
       for ( const QLineEdit* lineEdit : lineEdits )
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
                  // То встановлюємо в поле результату значення Nan
                  ui->lineEdit_35-> setText( "Nan" ),
                  ui->lineEdit_29-> setText( "Nan" ),
                  ui->lineEdit_24-> setText( "Nan" ),
                  ui->lineEdit_32-> setText( "Nan" );

              }
             else
             {  //Рахуєм математичне сподівання для першої альтернативи
                x1=(a1*z1)+(a2*z2)+(a3*z3)+(a4*z4)+(a5*z5);
                //Виводимо результат
                ui->lineEdit_35->setText(QString::number(x1));}

    //Зчитуєм дані з другої альтернативи A2
    std :: vector <QLineEdit*> lineEdits1 = { ui->lineEdit_6, ui->lineEdit_7, ui->lineEdit_8 , ui->lineEdit_9, ui->lineEdit_10};
    std :: vector <double> values1 ;

       QString S11 = ui->lineEdit_6->text();
       b1 = S11.toFloat();

       QString S12 = ui->lineEdit_7->text();
       b2 = S12.toFloat();

       QString S13 = ui->lineEdit_8->text();
       b3 = S13.toFloat();

       QString S14 = ui->lineEdit_9->text();
       b4 = S14.toFloat();

       QString S15 = ui->lineEdit_10->text();
       b5 = S15.toFloat();

       for ( const QLineEdit* lineEdit : lineEdits1 )
                {
                    bool ok = false ;
                    double value = lineEdit -> text (). toDouble (& ok );
                    if ( ok )
                    {
                        values1 . push_back ( value );
                    }
                }
              if ( values1.empty ())
              {
                  ui->lineEdit_33 -> setText ( "Nan" );
              }
              else
              {
                //Рахуєм математичне сподівання для другої альтернативи
                y1=(b1*z1)+(b2*z2)+(b3*z3)+(b4*z4)+(b5*z5);
                //Виводимо результат
                ui->lineEdit_33->setText(QString::number(y1));}

    //Зчитуєм дані з третьої альтернативи A3
    std :: vector <QLineEdit*> lineEdits2 = { ui->lineEdit_11, ui->lineEdit_12, ui->lineEdit_13 , ui->lineEdit_14, ui->lineEdit_15};
    std :: vector <double> values2 ;
       QString S16 = ui->lineEdit_11->text();
       c1 = S16.toFloat();

       QString S17 = ui->lineEdit_12->text();
       c2 = S17.toFloat();

       QString S18 = ui->lineEdit_13->text();
       c3 = S18.toFloat();

       QString S19 = ui->lineEdit_14->text();
       c4 = S19.toFloat();

       QString S20 = ui->lineEdit_15->text();
       c5 = S20.toFloat();

       for ( const QLineEdit* lineEdit : lineEdits2 )
                {
                    bool ok = false ;
                    double value = lineEdit -> text (). toDouble (& ok );
                    if ( ok )
                    {
                        values2 . push_back ( value );
                    }
                }
              if ( values2.empty ())
              {
                  ui->lineEdit_38 -> setText ( "Nan" );
              }
              else
              {   //Рахуєм математичне сподівання для третьої альтернативи
                  z11=(c1*z1)+(c2*z2)+(c3*z3)+(c4*z4)+(c5*z5);
                  //Виводимо результат
                  ui->lineEdit_38->setText(QString::number(z11));
              }

  //Зчитуєм дані з четвертої альтернативи A4
  std :: vector <QLineEdit*> lineEdits3 = { ui->lineEdit_25, ui->lineEdit_26, ui->lineEdit_27 , ui->lineEdit_36, ui->lineEdit_37};
  std :: vector <double> values3 ;

       QString S21 = ui->lineEdit_25->text();
       d1 = S21.toFloat();

       QString S22 = ui->lineEdit_26->text();
       d2 = S22.toFloat();

       QString S23 = ui->lineEdit_27->text();
       d3 = S23.toFloat();

       QString S24 = ui->lineEdit_36->text();
       d4 = S24.toFloat();

       QString S25 = ui->lineEdit_37->text();
       d5 = S25.toFloat();

       for ( const QLineEdit* lineEdit : lineEdits3 )
                {
                    bool ok = false ;
                    double value = lineEdit -> text (). toDouble (& ok );
                    if ( ok )
                    {
                        values3 . push_back ( value );
                    }
                }
              if ( values3.empty ())
              {
                  ui->lineEdit_34 -> setText ( "Nan" );
              }
              else
              {   //Рахуєм математичне сподівання для четвертої альтернативи
                  n1=(d1*z1)+(d2*z2)+(d3*z3)+(d4*z4)+(d5*z5);
                  //Виводимо результат
                  ui->lineEdit_34->setText(QString::number(n1));}

//Рахуємо дисперсію
//Для A1        
if ( ui->lineEdit_35->text()=="Nan")
{
    ui->lineEdit_29-> setText ( "Nan" );
}
else
{
    s1=pow(a1-x1, 2)*z1+pow(a2-x1, 2)*z2+pow(a3-x1, 2)*z3+pow(a4-x1, 2)*z4+pow(a5-x1, 2)*z5;
    ui->lineEdit_29->setText(QString::number(s1));
}

//Для A2
if ( ui->lineEdit_33->text()=="Nan")
{
    ui->lineEdit_28 -> setText ( "Nan" );
}
else
{
    s2= pow(b1-y1, 2)*z1+pow(b2-y1, 2)*z2+pow(b3-y1, 2)*z3+pow(b4-y1, 2)*z4+pow(b5-y1, 2)*z5;
    ui->lineEdit_28->setText(QString::number(s2));
}

//Для A3
if ( ui->lineEdit_38->text()=="Nan")
{
    ui->lineEdit_39 -> setText ( "Nan" );
}
else
{     s3= pow(c1-z11, 2)*z1+pow(c2-z11, 2)*z2+pow(c3-z11, 2)*z3+pow(c4-z11, 2)*z4+pow(c5-z11,2)*z5;
      ui->lineEdit_39->setText(QString::number(s3));
}

//Для A4
if ( ui->lineEdit_34->text()=="Nan")
{
    ui->lineEdit_22 -> setText ( "Nan" );
}
else
{
      s4= pow(d1-n1, 2)*z1+pow(d2-n1, 2)*z2+(d3-n1, 2)*z3+(d4-n1, 2)*z4+pow(d5-n1, 2)*z5;
      ui->lineEdit_22->setText(QString::number(s4));
}

//Рахуєм середнє квадратичне відхилення
//Для A1
if (ui->lineEdit_35->text()=="Nan")
{
    ui->lineEdit_24 -> setText ( "Nan" );
}
else
{
     v1=sqrt(s1);
     ui->lineEdit_24->setText(QString::number(v1));
}
//Для A2
if ( ui->lineEdit_33->text()=="Nan")
{
     ui->lineEdit_23 -> setText ( "Nan" );
}
else
{
     v2=sqrt(s2);
     ui->lineEdit_23->setText(QString::number(v2));
}
//Для A3
if ( ui->lineEdit_38->text()=="Nan")
{
     ui->lineEdit_40 -> setText ( "Nan" );
}
else
{
     v3=sqrt(s3);
     ui->lineEdit_40->setText(QString::number(v3));
}
//Для A4
if ( ui->lineEdit_34->text()=="Nan")
{
     ui->lineEdit_21 -> setText ( "Nan" );
}
else
{
     v4=sqrt(s4);
     ui->lineEdit_21->setText(QString::number(v4));}

//Рахуєм коефіцієнт варіації
//Для A1
if ( ui->lineEdit_35->text()=="Nan")
{
    ui->lineEdit_32 -> setText ( "Nan" );
}
else
{
    k1=v1/x1*100;
    ui->lineEdit_32->setText(QString::number(k1));
}
//Для A2
if (ui->lineEdit_33->text()=="Nan")
{
    ui->lineEdit_41 -> setText ( "Nan" );
}
else
{
    k2=v2/y1*100;
    ui->lineEdit_41->setText(QString::number(k2));
}
//Для A3
if (ui->lineEdit_38->text()=="Nan")
{
    ui->lineEdit_31 -> setText ( "Nan" );
}
else
{
    k3=v3/z11*100;
    ui->lineEdit_31->setText(QString::number(k3));
}
//Для A4
if (ui->lineEdit_34->text()=="Nan")
{
    ui->lineEdit_30 -> setText ( "Nan" );
}
else
{
    k4=v4/n1*100;
    ui->lineEdit_30->setText(QString::number(k4));}
}

void Dialog2::on_pushButton_clicked()
{
    std :: vector < QLineEdit *> lineEdits = { ui->lineEdit_24, ui->lineEdit_23, ui->lineEdit_40 , ui->lineEdit_21 };
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
       if ( values.empty ())
       {
           // То встановлюємо в поле результату значення Nan
           ui -> lineEdit_42 -> setText ( "Nan" );
       }
       else
       {
           // Інакше намагаємося знайти мінімальне значення засобами стандартної бібліотеки
           double min = * std :: min_element ( values.begin (), values.end ());
           ui -> lineEdit_42 -> setText ( QString :: number ( min ));

       //Пошук найкращої альтернативи для інвестування
       if( values[0] == min ){
           ui -> lineEdit_42 -> setText ( "A1");
       }
       else if(values[1] == min){
           ui -> lineEdit_42 -> setText ( "A2");
       }
       else if(values[2] == min){
           ui -> lineEdit_42 -> setText ( "A3");
       }
       else if(values[3] == min){
           ui -> lineEdit_42 -> setText ( "A4");
       }
       else if(values[4] == min){
           ui -> lineEdit_42 -> setText ( "A5");
       }

}
}

void Dialog2::on_pushButton_2_clicked()
{
    //Підключення бази даних
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:\\Users\\nadia\\database2021.db");
    db.open();
    QSqlQuery query = QSqlQuery (db);
    query.prepare ( "INSERT INTO  'Сriteria_of _mean_and_standard_deviation' (Result_2) VALUES (:Result_2)");
    QString str1 = ui-> lineEdit_42-> text ();
    query.addBindValue (str1);
    query.exec ();
}
