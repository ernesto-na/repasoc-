
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

class Profesor
{
private:
  string nombre, apellidoP, apellidoM, sexo, profesion;
  int edad, numCedulaProfesional;

public:
    Profesor ()
  {
    nombre = "Sin nombre";
    apellidoP = "Sin apellido";
    apellidoM = "Sin apellido";
    sexo = "";
    edad = 18;
    profesion = "";
    numCedulaProfesional = -1;
  }

  Profesor (string nombre,
	    string apellidoP,
	    string apellidoM,
	    string sexo, int edad, string profesion, int numCedulaProfesional)
  {
    setNombre (nombre);
    setApellidoP (apellidoP);
    setApellidoM (apellidoM);
    setSexo (sexo);
    setEdad (edad);
    setProfesion (profesion);
    setNumCedulaProfesional (numCedulaProfesional);
  }
  void setNombre (string nombre)
  {
    this->nombre = nombre.length () <= 30 ? nombre : "Error";
  }
  string getNombre ()
  {
    return nombre;
  }

  void setApellidoP (string apellidoP)
  {
    this->apellidoP = apellidoP.length () <= 25 ? apellidoP : "Error";
  }
  string getApellidoP ()
  {
    return apellidoP;
  }
  void setApellidoM (string apellidoM)
  {
    this->apellidoM = apellidoM.length () <= 25 ? apellidoM : "Error";
  }
  string getApellidoM ()
  {
    return apellidoM;
  }
  void setSexo (string sexo)
  {
    this->sexo = sexo.length () <= 10 ? sexo : "Error";
  }
  string getSexo ()
  {
    return sexo;
  }
  void setEdad (int edad)
  {
    this->edad = edad >= 0 && edad <= 100 ? edad : -1;
  }
  int getEdad ()
  {
    return edad;
  }
  void setProfesion (string profesion)
  {
    this->profesion = profesion.length () <= 100 ? profesion : "Error";
  }
  string getProfesion ()
  {
    return profesion;
  }
  void setNumCedulaProfesional (int numCedulaProfesional)
  {
    this->numCedulaProfesional =
      numCedulaProfesional >= 0 ? numCedulaProfesional : -1;
  }
  int getNumCedulaProfesional ()
  {
    return numCedulaProfesional;
  }

};
