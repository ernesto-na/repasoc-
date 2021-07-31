#include"Alumno.h"
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
Alumno arregloAlumnos[100];
void leerAlumnos(){
    for(int i=0; i<=1;i++){
                string auxNombre, auxAPaterno,auxSexo;
                int auxEdad,auxNumCtrlEscolar,auxSemestre;
                fflush(stdin);
                system("cls");
                cout<<"\n\n\tBienvenido al sistema escolar"<<endl;
                cout<<"\tEscribe del alumno ";
                getline(cin,auxNombre);
                cout<<"\tEscribe el apellido paterno ";
                getline(cin,auxAPaterno);
                cout<<"\tEscribe el sexo ";
                getline(cin,auxSexo);
                cout<<"\tEscribe la edad ";
                cin>>auxEdad;
                cout<<"\tEscribe el numero de Boleta ";
                cin>>auxNumCtrlEscolar;
                cout<<"\tEscribe el numero de semestre ";
                cin>>auxSemestre;
                Alumno alumno(auxNombre,auxAPaterno,auxSexo,auxEdad,auxNumCtrlEscolar,auxSemestre);
              // Alumno alumno(auxNombre,"cena","masculino",45,100,8);

                arregloAlumnos[i] = alumno;
                }
}
        void validarAlumnos(){
                system("cls");
                string auxNombre;
                fflush(stdin);
                cout<<"\n\tEscribe el nombre del alumno a buscar: ";
                getline(cin,auxNombre);
                for(int i=0; i<=2;i++){
                    if(arregloAlumnos[i].getNombre()==auxNombre){
                        cout<<"\n\n\n----------------------------------------------------------\n";
                        cout<<"\tEl nombre es: "<<arregloAlumnos[i].getNombre()<<endl;
                        cout<<"\tEl apellido paterno: "<<arregloAlumnos[i].getApellidoP()<<endl;
                        cout<<"\tEl sexo es: "<<arregloAlumnos[i].getSexo()<<endl;
                        cout<<"\tSu edad es: "<<arregloAlumnos[i].getEdad()<<endl;
                        cout<<"\tSu Boleta es: "<<arregloAlumnos[i].getNumeroCtrlEscolar()<<endl;
                        cout<<"\tSu Semestre es: "<<arregloAlumnos[i].getSemestre()<<endl;
                        cout<<"\n----------------------------------------------------------";
                    }
                }
        }

        int main()
            {
                    leerAlumnos();
                    validarAlumnos();
            }

