#include <stdio.h>
#include<iostream>
using namespace std;
class Fecha
{
      private:
      int dia;
      int mes;
      int anio;
      public:
      Fecha()
      {
           dia=1;
           mes=1;
           anio=2011;
      }
      Fecha(int dia, int mes, int anio)
      {
                setAnio(anio);
                setMes(mes);
                setDia(dia);
      }
      ~Fecha()
      {
      cout<<"Se elimino una fecha"<<endl;
      }
      void setDia(int dia)
      {
      this->dia= dia>0 && dia <=diasMes()? dia : 0; //operador implicito evita el conflicto entre la variable local de bloque y atributo
      }
      int getDia()
      {
          return dia;
      }
      void setMes(int mes)
      {
           this->mes=mes>0 && mes<=12? mes:0;
      }
      int getMes()
      {
          return mes;
      }
      void setAnio(int anio)
      {
           this->anio=anio>=0?anio:-1;
      }
      int getAnio()
      {
          return anio;
      }
      bool esAnioBisiesto()
      {
            return anio%4==0 && anio%100!=0 || anio%400==0;
      }
      int diasMes()
      {
          switch (mes)
          {
                 case 1:
                 case 3:
                 case 5:
                 case 7:
                 case 8:
                 case 10:
                 case 12:
                      return 31;
                 case 4:
                 case 6:
                 case 9:
                 case 11:
                 return 30;
                 case 2:
                 if(esAnioBisiesto())
                 return 29;
                 else
                 return 28;
                 default:
                 return 0;
                 }
          }
          void leer()
          {
               int auxI;
               cout<<"Escribe el anio: ";
               cin>>auxI;
               setAnio(auxI);
               cout<<"Escribe el mes: ";
               cin>>auxI;
               setMes(auxI);
               cout<<"Escribe el dia: ";
               cin>>auxI;
               setDia(auxI);
          }
          void imprimir()
          {
          if(dia<10)
          cout<<"0"<<dia<<"/";
          else
          cout<<dia<<"/";
          if(mes<10)
          cout<<"0"<<mes<<"/";
          else
          cout<<mes<<"/";
          cout<<anio<<endl;
          }
};
