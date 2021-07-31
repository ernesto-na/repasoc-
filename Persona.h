#include <stdio.h>
#include<iostream>
using namespace std;
class Persona
{
      private:
              string nombre,apellidoP, apellidoM;
              int edad;
              float estatura;
              Fecha nacimiento;

      public:
             Persona()
             {
             nombre="Sin nombre";
             apellidoP="Sin apellido";
             apellidoM="Sin apellido";
             edad=18;
             estatura=1.6;
             }
             Persona(string nombre,string apellidoP, string apellidoM)
             {
              setNombre(nombre);
              setApellidoP(apellidoP);
              setApellidoM(apellidoM);
              edad=18;
              estatura=1.6;
              }
             Persona(const Persona&persona)
             {
                           *this=persona;
             }
             void setNombre(string nombre)
             {
                  this->nombre=nombre.length()<=30?nombre:"Error";
             }
             string getNombre()
             {
                    return nombre;
             }
             void setApellidoP(string apellidoP)
             {
                  this->apellidoP=apellidoP.length()<=25?apellidoP:"Error";
             }
             string getApellidoP()
             {
                    return apellidoP;
             }
             void setApellidoM(string apellidoM)
             {
                  this->apellidoM=apellidoM.length()<=25?apellidoM:"Error";
             }
             string getApellidoM()
             {
                    return apellidoM;
             }
             void setEdad(int edad)
             {
                  this->edad=edad>=0 && edad<=100?edad:-1;
             }
             int getEdad()
             {
                 return edad;
             }
             void setEstatura(float estatura)
             {
                  this->estatura=estatura>0.3 && estatura<=2.1?estatura:0;
             }
             float getEstatura()
             {
                   return estatura;
             }
            void setNacimiento(Fecha nacimiento)
             {
                  this->nacimiento=nacimiento;
             }
             Fecha getNacimiento()
             {
                   return nacimiento;
             }





              void leer()
             {
             string auxS;
             int auxI;
             float auxF;
             fflush(stdin);
             cout<<"Escribe el nombre ";
             getline(cin,auxS);
             setNombre(auxS);
             cout<<"Escribe el apellido Paterno";
             getline(cin,auxS);
             setApellidoP(auxS);
             cout<<"Escribe el apellido Materno";
             getline(cin,auxS);
             setApellidoM(auxS);
             cout<<"Escribe la edad";
             cin>>auxI;
             setEdad(auxI);
             cout<<"Escribe la estatura";
             cin>>auxF;
             setEstatura(auxF);
             cout<<"Fecha de nacimiento"<<endl;
             nacimiento.leer();
             }
             void imprimir()
             {
                  string nomC=nombre + " " + apellidoP + " " + apellidoM;
                  cout<<"Nombre: " <<nomC<<endl;
                  cout<<"Edad: "<<edad<<" anio(s)"<<endl;
                  cout<<"Estatura: "<<estatura<<" m"<<endl;
                  cout<<"Fecha Nacimiento: ";
                  nacimiento.imprimir();
             }
             void cumplirAnios()
             {
                  edad+=edad<=99?1:0;
             }
             void cumplirAnios(int anios)
             {
                  edad+=anios<=100-edad?anios:0;
             }

             };


























