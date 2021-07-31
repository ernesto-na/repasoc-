
#include"Cliente.h"
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
Cliente arreobj[3];
void leerClientes(){
    for(int i=0; i<=1;i++){
                string auxNombre, auxAPaterno,auxAMaterno;
                int auxEdad;
                float auxMontoCuenta;
                fflush(stdin);
                system("cls");
                cout<<"\n\n\tBienvenido al sistema para guardar clientes"<<endl;
                cout<<"\tEscribe el nombre ";
                getline(cin,auxNombre);
                cout<<"\tEscribe el apellido paterno ";
                getline(cin,auxAPaterno);
                cout<<"\tEscribe el apellido materno ";
                getline(cin,auxAMaterno);
                cout<<"\tEscribe la edad ";
                cin>>auxEdad;
                cout<<"\tEscribe el monto ";
                cin>>auxMontoCuenta;
                Cliente cliente(auxNombre,auxAPaterno,auxAMaterno,auxEdad,auxMontoCuenta);

                arreobj[i] = cliente;
                }
}
        void validarClientes(){
                system("cls");
                string auxNombre;
                fflush(stdin);
                cout<<"\n\tEscribe el nombre del cliente a buscar: ";
                getline(cin,auxNombre);
                for(int i=0; i<=2;i++){
                    if(arreobj[i].getNombre()==auxNombre){
                        cout<<"\n\n\n----------------------------------------------------------\n";
                        cout<<"\tEl nombre es: "<<arreobj[i].getNombre()<<endl;
                        cout<<"\tEl apellido paterno: "<<arreobj[i].getApellidoP()<<endl;
                        cout<<"\tEl apellido materno: "<<arreobj[i].getApellidoM()<<endl;
                        cout<<"\tSu edad es: "<<arreobj[i].getEdad()<<endl;
                        cout<<"\tSu monto es: "<<arreobj[i].getMontoCuenta()<<endl;
                        cout<<"\n----------------------------------------------------------";
                    }
                }
        }

        int main()
            {
                    leerClientes();
                    validarClientes();
            }
