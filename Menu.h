#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include<iostream>
using namespace std;
class Menu
{
      private:
              int numOpciones, opcion;
              string titulo, *opciones;
      public:
      Menu(int numOpciones, string titulo, string *opciones)
      {
      setNumOpciones(numOpciones);
      setTitulo(titulo);
      this->opciones=opciones;
      opciones=0;
      }
      void setTitulo(string titulo)
      {
           this->titulo=titulo;
      }
      string getTitulo()
      {
             return titulo;
      }
      void setNumOpciones(int numOpciones)
      {
           this->numOpciones=numOpciones>0?numOpciones:0;
      }
      int getNumOpciones()
      {
          return numOpciones;
      }
      int getOpcion()
      {
          return opcion;
      }
      void mostrar()
      {
           do
           {
           system("cls");
           cout<<titulo<<endl<<endl;
           for(int i=0; i<numOpciones;i++)

           cout<<i+1<<".-"<<opciones[i]<<endl;
           cout<<"Escribe el numero de la opcion: ";
           cin>>opcion;
           }
           while(opcion<=0 || opcion>numOpciones);
           system("cls");
           }
           };





