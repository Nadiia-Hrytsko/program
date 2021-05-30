#include "dialog5.h"
#include "ui_dialog5.h"
#include "QtSql/QSqlDatabase"
#include "QSqlQuery"

Dialog5::Dialog5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog5)
{
    ui->setupUi(this);
}

Dialog5::~Dialog5()
{
    delete ui;
}

void Dialog5::on_pushButton_2_clicked()
{
    float  a1, a2, a3, a4, a5,
           b1, b2, b3, b4, b5,
           c1, c2, c3, c4, c5,
           d1, d2, d3, d4, d5,
           i1, i2, i3, i4,
           v1, v2, v3, v4,
           n1, n2, n3, n4;

      //Зчитуєм дані з першого проєкту
      std :: vector <QLineEdit*> lineEdits = { ui->lineEdit_5, ui->lineEdit_3, ui->lineEdit , ui->lineEdit_2, ui->lineEdit_4};
      // Створюємо вектор для збереження значень з поле введення
      std :: vector <double> values ;

         //Зчитуєм значення із першого lineEdit
         QString S1 = ui->lineEdit_5->text();
         //Переводим значення в число
         a1 = S1.toFloat();

         QString S2 = ui->lineEdit_3->text();
         a2 = S2.toFloat();

         QString S3 = ui->lineEdit->text();
         a3 = S3.toFloat();

         QString S4 = ui->lineEdit_2->text();
         a4 = S4.toFloat();

         QString S5 = ui->lineEdit_4->text();
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
                //Перевірка на наявність значень в першому проєкті
                if ( values.empty ())

                {
                    // То встановлюємо в поле результату значення Nan
                    ui->lineEdit_31-> setText( "Nan" ),
                    ui->lineEdit_35-> setText( "Nan" ),
                    ui->lineEdit_36-> setText( "Nan" );
                }
               else
                { //Рахуєм значення дисперсії для першого проєкту
                  i1=(a4/100)*(pow(a1-a2, 2))+(a5/100)*(pow(a3-a2, 2));
                  //Виводимо результат
                  ui->lineEdit_31->setText(QString::number(i1));}

    //Зчитуєм дані з другого проєкту

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
                    ui->lineEdit_32 -> setText ( "Nan" );
                    ui->lineEdit_40 -> setText ( "Nan" );
                    ui->lineEdit_37 -> setText ( "Nan" );
                }
                else
                {
                  //Рахуєм значення дисперсії для другого проєкту
                  i2=(b4/100)*(pow(b1-b2, 2))+(b5/100)*(pow(b3-b2, 2));
                  //Виводимо результат
                  ui->lineEdit_32->setText(QString::number(i2));}

    //Зчитуєм дані з третього проєкту
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
                    ui->lineEdit_33 -> setText ( "Nan" );
                    ui->lineEdit_41 -> setText ( "Nan" );
                    ui->lineEdit_38 -> setText ( "Nan" );
                }
                else
                {   //Рахуєм значення дисперсії для третього проєкту
                    i3=(c4/100)*(pow(c1-c2, 2))+(c5/100)*(pow(c3-c2, 2));
                    //Виводимо результат
                    ui->lineEdit_33->setText(QString::number(i3));}

   //Зчитуєм дані з четвертого проєкту
    std :: vector <QLineEdit*> lineEdits3 = { ui->lineEdit_16, ui->lineEdit_17, ui->lineEdit_18 , ui->lineEdit_19, ui->lineEdit_20};
    std :: vector <double> values3 ;

         QString S21 = ui->lineEdit_16->text();
         d1 = S21.toFloat();

         QString S22 = ui->lineEdit_17->text();
         d2 = S22.toFloat();

         QString S23 = ui->lineEdit_18->text();
         d3 = S23.toFloat();

         QString S24 = ui->lineEdit_19->text();
         d4 = S24.toFloat();

         QString S25 = ui->lineEdit_20->text();
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
                    ui->lineEdit_42 -> setText ( "Nan" );
                    ui->lineEdit_39 -> setText ( "Nan" );
                }
                else
                {
                   //Рахуєм значення дисперсії для четвертого проєкту
                   i4=(d4/100)*(pow(d1-d2, 2))+(d5/100)*(pow(d3-d2, 2));
                   //Виводимо результат
                   ui->lineEdit_34->setText(QString::number(i4));}

  //Рахуєм середньоквадратичне відхилення для проєктів
  //Для першого проєкту
          if ( ui->lineEdit_31->text()=="Nan")
           {
                 ui->lineEdit_35 -> setText ( "Nan" );
           }
           else
            {   v1=sqrt(i1);
                ui->lineEdit_35->setText(QString::number(v1));
            }

  //Для другого проєкту
           if ( ui->lineEdit_32->text()=="Nan")
             {
                  ui->lineEdit_40 -> setText ( "Nan" );
             }
            else
              {   v2=sqrt(i2);
                  ui->lineEdit_40->setText(QString::number(v2));
              }
  //Для третього проєкту
             if ( ui->lineEdit_33->text()=="Nan")
                {
                  ui->lineEdit_41 -> setText ( "Nan" );
                }
              else
                 { v3=sqrt(i3);
                   ui->lineEdit_41->setText(QString::number(v3));
                 }
  //Для четвертого проєкту
            if ( ui->lineEdit_34->text()=="Nan")
               {
                 ui->lineEdit_42 -> setText ( "Nan" );
               }
              else
               { v4=sqrt(i4);
                 ui->lineEdit_42->setText(QString::number(v4));
               }

  //Рахуєм коефіцієнт варіації для проєктів

  //Для першого проєкту
        if ( ui->lineEdit_31->text()=="Nan")
        {
            ui->lineEdit_36 -> setText ( "Nan" );
        }
        else
        {   n1=(v1/a2)*100;
            ui->lineEdit_36->setText(QString::number(n1));}

  //Для другого проєкту
        if ( ui->lineEdit_32->text()=="Nan")
        {
            ui->lineEdit_37 -> setText ( "Nan" );
        }
        else
        {  n2=(v2/b2)*100;
            ui->lineEdit_37->setText(QString::number(n2));}

  //Для третього проєкту
        if ( ui->lineEdit_33->text()=="Nan")
        {
            ui->lineEdit_38 -> setText ( "Nan" );
        }
        else
        {   n3=(v3/c2)*100;
            ui->lineEdit_38->setText(QString::number(n3));}

  //Для четвертого проєкту
        if ( ui->lineEdit_34->text()=="Nan")
        {
            ui->lineEdit_39 -> setText ( "Nan" );
        }
        else
        {   n4=(v4/d2)*100;
            ui->lineEdit_39->setText(QString::number(n4));}

}

void Dialog5::on_pushButton_clicked()
{
    //Перевірка, чи введено дані
    std :: vector < QLineEdit *> lineEdits = { ui->lineEdit_36, ui->lineEdit_37, ui->lineEdit_38 , ui->lineEdit_39 };
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
       if ( values.empty ())
       {
           // То встановлюємо в поле результату значення Nan
           ui ->lineEdit_2021 -> setText ( "Nan" );
       }
       else
       {
           // Інакше намагаємося знайти мінімальне значення засобами стандартної бібліотеки
           double min = * std :: min_element ( values.begin (), values.end ());
           ui -> lineEdit_2021 -> setText ( QString :: number ( min ));

           //Пошук найкращого проєкту для інвестування
           if( values[0] == min ){
               ui -> lineEdit_2021 -> setText ( "Проєкт №1");
           }
           else if(values[1] == min){
               ui -> lineEdit_2021 -> setText ( "Проєкт №2");
           }
           else if(values[2] == min){
               ui -> lineEdit_2021 -> setText ( "Проєкт №3");
           }
           else if(values[3] == min){
               ui -> lineEdit_2021 -> setText ( "Проєкт №4");
           }
           else if(values[4] == min){
               ui -> lineEdit_2021 -> setText ( "Проєкт №5");
           }
       }
}

void Dialog5::on_pushButton_7_clicked()
{   //Підключення бази даних
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:\\Users\\nadia\\database2021.db");
    db.open();
    QSqlQuery query = QSqlQuery (db);
    query.prepare ( "INSERT INTO  'Investment_model' (Result_5) VALUES (:Result_5)");
    QString str1 = ui-> lineEdit_2021-> text ();
    query.addBindValue (str1);
    query.exec ();
}
