#include <stdio.h>
#include<iostream>
//#include"Materia.h"
using namespace std;
class Alumno
{
      private:
              string nombre,apellidoP, sexo;
              int edad,numeroCtrlEscolar,semestre,idMateria;
              //Materia *materia;

      public:
             Alumno()
             {
             nombre="Sin nombre";
             apellidoP="Sin apellido";
             sexo="Sin sexo";
             edad=18;
             numeroCtrlEscolar=0.0;
             semestre=0;
             idMateria=0;
             }
             Alumno(string nombre,string apellidoP, string sexo,int edad,int numeroCtrlEscolar,int semestre,int idMateria )
             {
              setNombre(nombre);
              setApellidoP(apellidoP);
              setSexo(sexo);
              setEdad(edad);
              setNumeroCtrlEscolar(numeroCtrlEscolar);
              setSemestre(semestre);
              setIdMateria(idMateria);
              }
               /*Alumno(string nombre,string apellidoP, string sexo,int edad,int numeroCtrlEscolar,int semestre,Materia *materia)
             {
              setNombre(nombre);
              setApellidoP(apellidoP);
              setSexo(sexo);
              setEdad(edad);
              setNumeroCtrlEscolar(numeroCtrlEscolar);
              setSemestre(semestre);
              setMateria(materia);
              }*/
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
    void setSexo(string sexo)
             {
                  this->sexo=sexo.length()<=25?sexo:"Error";
             }
    string getSexo()
             {
                    return sexo;
             }

    void setEdad(int edad)
             {
                  this->edad=edad>=0 && edad<=100?edad:-1;
             }
    int getEdad()
             {
                 return edad;
             }
    void setNumeroCtrlEscolar(int numeroCtrlEscolar)
             {
                  this->numeroCtrlEscolar=numeroCtrlEscolar>=0 && numeroCtrlEscolar<=100?numeroCtrlEscolar:-1;
             }
    int getNumeroCtrlEscolar()
             {
                 return numeroCtrlEscolar;
             }
    void setSemestre(int semestre)
             {
                  this->semestre=semestre>=0 && semestre<=100?semestre:-1;
             }
    int getSemestre()
             {
                 return semestre;
             }
    /*void setMateria(Materia *materia)
      {
           this->materia=materia;
      }
    Materia* getMateria()
      {
      return materia;
      }*/

    void setIdMateria(int idMateria)
             {
                  this->idMateria=idMateria>=0 && idMateria<=100?idMateria:-1;
             }
    int getIdMateria()
             {
                 return idMateria;
             }
};
