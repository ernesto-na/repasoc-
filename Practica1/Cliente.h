#include <stdio.h>
#include<iostream>
using namespace std;
class Cliente
{
      private:
              string nombre,apellidoP, apellidoM;
              int edad;
              float montoCuenta;

      public:
             Cliente()
             {
             nombre="Sin nombre";
             apellidoP="Sin apellido";
             apellidoM="Sin apellido";
             edad=18;
             montoCuenta=0.0;
             }
             Cliente(string nombre,string apellidoP, string apellidoM,int edad,float montoCuenta)
             {
              setNombre(nombre);
              setApellidoP(apellidoP);
              setApellidoM(apellidoM);
              setEdad(edad);
              setMontoCuenta(montoCuenta);
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
    void setMontoCuenta(float montoCuenta)
             {
                  this->montoCuenta=montoCuenta>0.0?montoCuenta:0;
             }
    float getMontoCuenta()
             {
                   return montoCuenta;
             }



};
