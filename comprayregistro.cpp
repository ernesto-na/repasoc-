#include"Compra.h"
#include"Menu.h"
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    string opciones1[]={"Datos Compra","Articulos Compra","Salir"};
    string opciones2[]={"Ver Fecha","Leer Fecha","Ver Cliente","Leer Cliente","Regresar"};
    string opciones3[]={"Agregar","Quitar","Quitar Todo","Mostrar","Regresar"};
    Menu m1(3,"Menu Principal",opciones1);
    Menu m2(5,"Menu Datos Compra",opciones2);
    Menu m3(5,"Menu Articulos",opciones3);
    Compra com;
    do
    {
           m1.mostrar();
           switch(m1.getOpcion())
           {
           case 1:
                do
                {
                                 m2.mostrar();
                                 switch(m2.getOpcion())
                                 {
                                       case 1:
                                            com.getFecha()->imprimir();
                                            system("pause");
                                            break;
                                       case 2:
                                            com.getFecha()->leer();
                                            break;
                                       case 3:
                                            com.getCliente()->imprimir();
                                            system("pause");
                                            break;
                                       case 4:
                                            com.getCliente()->leer();
                                            break;
                                 }
                }
                while(m2.getOpcion()!=5);
                break;
           case 2:
                do
                {
                      m3.mostrar();
                      switch(m3.getOpcion())
                      {
                                            case 1:
                                                 com.agregarArticulo();
                                                 break;
                                            case 2:
                                                 com.mostrar();
                                                 com.quitarArticulo();//    ?
                                                 system("cls");
                                                 com.mostrar();
                                                 system("pause");
                                                 break;
                                            case 3:
                                                 com.quitarTodos();
                                                 break;
                                            case 4:
                                                 com.mostrar();
                                                 system("pause");
                                                 break;
                      }
                }
                while(m3.getOpcion()!=5);
                break;
           }
    }
    while(m1.getOpcion()!=3);
}



