#include <stdio.h>
#include<iostream>
#include"Fecha.h"
#include"Articulo.h"
#include"Persona.h"
using namespace std;
class Compra
{
      private:
      int numArticulos;
      Articulo *articulos[100];
      Fecha *fecha;
      Persona *cliente;
      public:
      Compra()
      {
              numArticulos=0;
              fecha= new Fecha;
              cliente=new Persona;
      }
      int getNumArticulos()
      {
          return numArticulos;
      }
      void setFecha(Fecha *fecha)
      {
           this->fecha=fecha;
      }
      Fecha* getFecha()
      {
             return fecha;
      }
      void setCliente(Persona *cliente)
      {
           this->cliente=cliente;
      }
      Persona* getCliente()
      {
      return cliente;
      }
      void agregarArticulo()
      {
           if(numArticulos==100)
           {
           cout<<"Limite de articulos"<<endl;
           return;
           }
           articulos[numArticulos]=new Articulo;
           articulos[numArticulos]->leer();
           numArticulos++;
      }
      void quitarArticulo()
      {
           int indice;
           cout<<"Escribe el numero del articulo que deseas quitar"<<endl;
           cin>>indice;
           if(indice>numArticulos||indice<=0)
           {
           cout<<"Indice no valido"<<endl;
           return;
           }

           indice--;
           delete articulos[indice];
           for(int i=indice; i<numArticulos-1;i++)
           articulos[i]=articulos[i+1];
           numArticulos--;
           }
           void quitarTodos()
           {
           for(int i=0;i<numArticulos;i++)
           delete articulos[i];
           numArticulos=0;
           }
           float total()
           {
                 float total=0;
                 for(int i=0; i<numArticulos;i++)
                 total+=articulos[i]->subTotal();
                 return total;
           }
           void mostrar()
           {
                cout<<"Fecha: ";
                fecha->imprimir();
                cout<<"Cliente: "<<cliente->getNombre()<<" "<<cliente->getApellidoP()<<" "<<cliente->getApellidoM()<<endl<<endl;
                printf("%5s %17s %7s %4s %7s\n", "Num","Articulo","Precio","Cantidad","Subtotal");
                for(int i=0; i<numArticulos; i++)
                {
                printf("%3d.-",i+1);
                articulos[i]->imprimir();
                }
                cout<<endl<<"Total: $"<<total()<<endl;
                }
};


