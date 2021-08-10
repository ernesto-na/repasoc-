
#include <stdio.h>
#include<iostream>
using namespace std;
class Persona
{
            private:
              string nombre,sexo;
              string edad;

      public:
             Persona()
             {
                nombre="Sin nombre";
                edad=18;
                sexo="M";
             }
             Persona(string nombre,string edad, string sexo)
             {
              setNombre(nombre);
              setEdad(edad);
              setSexo(sexo);
              }

                void setNombre(string nombre)
                 {
                      this->nombre=nombre.length()<=30?nombre:"Error";
                 }
                string getNombre()
                 {
                        return nombre;
                 }

             void setEdad(string edad)
             {
                  this->edad=edad.length()<=30?edad:"Error";
             }
            string getEdad()
             {
                 return edad;
             }
            void setSexo(string sexo)
             {
                  this->sexo=sexo.length()<=30?sexo:"Error";
             }
            string getSexo()
             {
                    return sexo;
             }

            void leerPersona(){
                //fflush(stdin);
                string auxNombre,auxSexo;
                string auxEdad;
                cout<<"\n\tEscribe el nombre de la persona ";
                getline(cin,auxNombre);

                cout<<"\n\tEscribe la edad ";
                getline(cin,auxEdad);

                cout<<"\n\tEscribe el sexo ";
                getline(cin,auxSexo);

                setNombre(auxNombre);
                setEdad(auxEdad);
                setSexo(auxSexo);
            }


             void mostrarPersona(){
                 cout<<"Los datos de la persona son: "<<endl;
                 cout<<"Nombre: "<<getNombre()<<endl;
                 cout<<"Edad: "<<getEdad()<<endl;
                 cout<<"Sexo: "<<getSexo()<<endl;
             }

};
