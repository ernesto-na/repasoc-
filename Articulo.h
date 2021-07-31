#include <stdio.h>
#include<iostream>
using namespace std;
class Articulo
{
      private:
              float precio;
              int cantidad;
              string nombre;
      public:
              Articulo()
              {
                        precio=0;
                        cantidad=0;
                        nombre="Sin nombre";
              }
      void setPrecio(float precio)
      {
           this->precio=precio>=0?precio:0;
      }
      float getPrecio()
      {
      return precio;
      }
void setCantidad(int cantidad)
     {
          this->cantidad=cantidad>=0?cantidad:0;
     }
     int getCantidad()
     {
         return cantidad;
     }
     void setNombre(string nombre)
     {
          this->nombre=nombre.length()<=15?nombre:"xxxx";
     }
     string getNombre()
     {
            return nombre;
     }
     void leer()
     {
          int auxI;
          float auxF;
          string auxS;
          fflush(stdin);
          cout<<"Escriba el nombre"<<endl;
          getline(cin,auxS);
          setNombre(auxS);
          cout<<"Escriba la cantidad"<<endl;
          cin>>auxI;
          setCantidad(auxI);
          cout<<"Escriba el precio"<<endl;
          cin>>auxF;
          setPrecio(auxF);
     }
     float subTotal()
     {
           return precio*cantidad;
     }
     void imprimir()
     {
          printf("%17s $%7.2f %6d  $%7.2f\n",nombre.c_str(), precio, cantidad, subTotal());
     }
};




