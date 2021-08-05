#include <stdio.h>
#include<iostream>
using namespace std;
class Materia
{
      private:
              string nombre,profesor;
              int numeroCreditos,idMateria;

      public:
             Materia()
             {
             nombre="Sin nombre";
             profesor="Sin apellido";
             numeroCreditos=0;
             idMateria=0;
             }
             Materia(string nombre,string profesor,int numeroCreditos,int idMateria)
             {
              setNombre(nombre);
              setProfesor(profesor);
              setNumeroCreditos(numeroCreditos);
              setIdMateria(idMateria);
              }
    void setNombre(string nombre)
             {
                  this->nombre=nombre.length()<=30?nombre:"Error";
             }
    string getNombre()
             {
                    return nombre;
             }

    void setProfesor(string profesor)
             {
                  this->profesor=profesor.length()<=25?profesor:"Error";
             }
    string getProfesor()
             {
                    return profesor;
             }
    void setNumeroCreditos(int numeroCreditos)
             {
                  this->numeroCreditos=numeroCreditos>=0 && numeroCreditos<=100?numeroCreditos:-1;
             }
    int getNumeroCreditos()
             {
                 return numeroCreditos;
             }
     void setIdMateria(int idMateria)
             {
                  this->idMateria=idMateria>=0 && idMateria<=100?idMateria:-1;
             }
    int getIdMateria()
             {
                 return idMateria;
             }

};
