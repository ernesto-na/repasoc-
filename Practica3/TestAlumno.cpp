#include"Alumno.h"
#include"Profesor.h"
#include"Materia.h"
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
Alumno arregloAlumnos[100];
Materia arregloMaterias[100];
Profesor arregloProfesores[100];
int elementos=1;
int indiceAlumnos=0,indiceProfesores=0,indiceMaterias=0;
void leerAlumnos(){

    cout<<"---iA->"<<indiceAlumnos<<"..elementos.."<<elementos;
    //for(int i=indiceAlumnos; i<elementos;i++){
                string auxNombre, auxAPaterno,auxSexo;
                int auxEdad,auxNumCtrlEscolar,auxSemestre,auxIdMateria;
                //Materia auxMateria;//("mate","ernes",10);
                fflush(stdin);
                //system("cls");
                cout<<"\n\n\tBienvenido al sistema escolar"<<endl;
                cout<<"\tEscribe el nombre del alumno ";
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


                Alumno alumno(auxNombre,auxAPaterno,auxSexo,auxEdad,auxNumCtrlEscolar,auxSemestre,auxIdMateria);
              // Alumno alumno(auxNombre,"cena","masculino",45,100,8);
              //Alumno alumno(auxNombre,auxAPaterno,auxSexo,auxEdad,auxNumCtrlEscolar,auxSemestre,auxIdMateria,0,auxIdMateria);
              for(int i=0; i<2; i++){
                    cout<<"\tEscriba el ID de la materias ";
                    cin>>auxIdMateria;
                    alumno.setIdArregloIdMaterias(i,auxIdMateria);
                }
              //cout<<"materias"<<alumno.getIdArregloIdMaterias(0);
                   // cout<<"---iA->"<<indiceAlumnos<<"..elementos.."<<elementos;

                arregloAlumnos[indiceAlumnos] = alumno;
                indiceAlumnos++;
}



        void validarAlumnos(){

                string auxNombre;
                for(int i=0; i<indiceAlumnos;i++){
                    //if(arregloAlumnos[i].getNombre()==auxNombre){
                        cout<<"\n\n\n----------------------BD--ALUMNOS------------------------------------\n";
                        cout<<"\tEl nombre es: "<<arregloAlumnos[i].getNombre()<<endl;
                        cout<<"\tEl apellido paterno: "<<arregloAlumnos[i].getApellidoP()<<endl;
                        cout<<"\tEl sexo es: "<<arregloAlumnos[i].getSexo()<<endl;
                        cout<<"\tSu edad es: "<<arregloAlumnos[i].getEdad()<<endl;
                        cout<<"\tSu Boleta es: "<<arregloAlumnos[i].getNumeroCtrlEscolar()<<endl;
                        cout<<"\tSu Semestre es: "<<arregloAlumnos[i].getSemestre()<<endl;
                        //cout<<"\tSu id de materia es: "<<arregloAlumnos[i].getIdMateria()<<endl;
                         cout<<"\tSus materias son: "<<endl;
                         for(int j=0; j<2; j++){

                                cout<<"\t\tSu materia es: "<<arregloAlumnos[i].getIdArregloIdMaterias(j)<<endl;
                                                }
                        cout<<"\n-------------------------------------------------------------------------";
                    //}
                }
        }

        void leerMaterias(){
            //for(int i=0; i<indiceMaterias;i++){
                        string auxNombre, auxProfesor;
                        int auxCreditos,auxId;
                        //Materia auxMateria;//("mate","ernes",10);
                        fflush(stdin);
                        system("cls");
                        cout<<"\n\n\tBienvenido al sistema escolar"<<endl;
                        cout<<"\tEscribe La materia ";
                        getline(cin,auxNombre);
                        cout<<"\tEscribe el profesor ";
                        getline(cin,auxProfesor);
                        cout<<"\tEscribe los creditos ";
                        cin>>auxCreditos;
                        cout<<"\tEscribe el id ";
                        cin>>auxId;
                        Materia materia(auxNombre,auxProfesor,auxCreditos,auxId);
                        arregloMaterias[indiceMaterias] = materia;
                        indiceMaterias++;
                       // }
}
void mostrarMaterias(){
            for(int i=0; i<indiceMaterias;i++){
                        cout<<"\n\n\n----------------------------------------------------------\n";
                        cout<<"\tLa materia es: "<<arregloMaterias[i].getNombre()<<endl;
                        cout<<"\tEl profesor es: "<<arregloMaterias[i].getProfesor()<<endl;
                        cout<<"\tLos creditos son: "<<arregloMaterias[i].getNumeroCreditos()<<endl;
                        cout<<"\tSu id es: "<<arregloMaterias[i].getIdMateria()<<endl;
                        cout<<"\n----------------------------------------------------------";
                        }
}

            void leerProfesor ()
            {
              //for (int i = 0; i <elementos ; i++)
                //{
                  string auxNombre, auxAPaterno, auxAMaterno, auxSexo, auxProfesion;
                  int auxEdad, auxNumCedulaProfesional;
                  float auxMontoCuenta;
                  fflush (stdin);
                  system ("cls");
                  cout << "\n\n\tBienvenido al sistema para guardar profesores" << endl;
                  cout << "\tEscribe el nombre ";
                  getline (cin, auxNombre);
                  cout << "\tEscribe el apellido paterno ";
                  getline (cin, auxAPaterno);
                  cout << "\tEscribe el apellido materno ";
                  getline (cin, auxAMaterno);
                  cout << "\tEscribe el sexo ";
                  getline (cin, auxSexo);
                  cout << "\tEscribe la edad ";
                  cin >> auxEdad;
                  //cout << "\tEscribe el titulo o profesion ";
                  //getline (cin, auxProfesion);
                  //cout << "\tEscribe No. de cedula profesional ";
                  //cin >> auxNumCedulaProfesional;
                  Profesor profesor (auxNombre, auxAPaterno, auxAMaterno, auxSexo,
                         auxEdad, auxProfesion, auxNumCedulaProfesional);

                  arregloProfesores[indiceProfesores] = profesor;
                  indiceProfesores++;
                //}
            }

            void validarProfesor ()
            {

              string auxNombre;
             // fflush(stdin);
             // cout << "\n\tEscribe el nombre del profesor a buscar: ";
             // getline (cin, auxNombre);
             cout<<"---iA->"<<indiceAlumnos<<"..elementos.."<<elementos;

              for (int i = 0; i < indiceProfesores; i++)
                {
                 // if (arregloProfesores[i].getNombre() == auxNombre)
                //{
                  cout <<"\n\n\n----------------------------------------------------------\n";
                  cout << "\tEl nombre del profesor es: " << arregloProfesores[i].getNombre () << endl;
                  cout << "\tEl apellido paterno: " << arregloProfesores[i].getApellidoP() << endl;
                  cout << "\tEl apellido materno: " << arregloProfesores[i].getApellidoM() << endl;
                  cout << "\tSu sexo es: " << arregloProfesores[i].getSexo() << endl;
                  cout << "\tSu edad es: " << arregloProfesores[i].getEdad() << endl;
                  cout << "\tSu titulo o profesion es: " << arregloProfesores[i].getProfesion() << endl;
                  cout << "\tSu No. de cedula profesional es: " << arregloProfesores[i].getNumCedulaProfesional() << endl;
                  cout <<"\n----------------------------------------------------------";
	//}
    }
}

        void eliminarAlumno(){
                string auxNombre;
                fflush(stdin);
                cout<<"\n\tEscribe el nombre del alumno a eliminar: ";
                getline(cin,auxNombre);
            for (int i = 0; i <=elementos ; i++)
                {
                  if (arregloAlumnos[i].getNombre() == auxNombre)
                  {
                        arregloAlumnos[i].setNombre("");
                        arregloAlumnos[i].setApellidoP("");
                        arregloAlumnos[i].setSexo("");
                        arregloAlumnos[i].setEdad(0);
                        arregloAlumnos[i].setNumeroCtrlEscolar(0);
                        arregloAlumnos[i].setSemestre(0);
                        arregloAlumnos[i].setIdMateria(0);
                  }
              }
              }

         void eliminarProfesor(){
                string auxNombre;
                fflush(stdin);
                cout<<"\n\tEscribe el nombre del profesor a eliminar: ";
                getline(cin,auxNombre);
            for (int i = 0; i <=elementos ; i++)
                {
                  if (arregloProfesores[i].getNombre() == auxNombre)
                  {
                        arregloProfesores[i].setNombre("");
                        arregloProfesores[i].setApellidoP("");
                        arregloProfesores[i].setApellidoM("");
                        arregloProfesores[i].setSexo("");
                        arregloProfesores[i].setEdad(0);
                        arregloProfesores[i].setProfesion("");
                        arregloProfesores[i].setNumCedulaProfesional(0);
                  }
              }}

          void eliminarMaterias(){
               string auxNombre;
                fflush(stdin);
                cout<<"\n\tEscribe el nombre de la materia a eliminar: ";
                getline(cin,auxNombre);
            for(int i=0; i<=elementos;i++){
                    if(arregloMaterias[i].getNombre()==auxNombre)
                    {
                       arregloMaterias[i].setNombre("");
                        arregloMaterias[i].setProfesor("");
                        arregloMaterias[i].setNumeroCreditos(0);
                        arregloMaterias[i].setIdMateria(0);
                    }

                }
}


        int main()
            {
                  //  leerMaterias();
                   // mostrarMaterias();
                   // eliminarMaterias();
                        int opcion;
                        bool repetir = true;

                        do {
                            //system("cls");

                            // Texto del menú que se verá cada vez
                            cout << "\n\nMenu de Opciones" << endl;
                            cout << "1. Agregar alumno 1" << endl;
                            cout << "2. Mostrar alumnos 2" << endl;
                            cout << "3. Borrar Alumnos" << endl;
                            cout << "4. Agregar Profesor" << endl;
                            cout << "5. Mostrar Profesores" << endl;
                            cout << "6. Borrar Profesores" << endl;
                            cout << "7. Agregar Materia" << endl;
                            cout << "8. Mostrar Materias" << endl;
                            cout << "9. Borrar Materia" << endl;
                            cout << "0. SALIR" << endl;

                            cout << "\nIngrese una opcion: ";
                            cin >> opcion;

                            switch (opcion) {
                                case 1:
                                    // Lista de instrucciones de la opción 1
                                       system("cls");
                                       leerAlumnos();

                                        //eliminarAlumno();
                                        //validarAlumnos();
                                    //system("1"); // Pausa
                                    break;

                                case 2:
                                    // Lista de instrucciones de la opción 2
                                    system("cls");
                                    validarAlumnos();
                                   // system("2"); // Pausa
                                    break;

                                case 3:
                                    // Lista de instrucciones de la opción 3
                                    eliminarAlumno();
                                    break;

                                case 4:
                                    // Lista de instrucciones de la opción 4
                                    leerProfesor();
                                   // system("4"); // Pausa
                                    break;
                                case 5:
                                    // Lista de instrucciones de la opción 4
                                    validarProfesor();
                                    //system("5"); // Pausa
                                    break;
                                case 6:
                                    // Lista de instrucciones de la opción 4
                                    eliminarProfesor();
                                    //system("6"); // Pausa
                                    break;
                                 case 7:
                                    // Lista de instrucciones de la opción 4
                                    leerMaterias();
                                    //system("6"); // Pausa
                                    break;
                                 case 8:
                                    // Lista de instrucciones de la opción 4
                                    mostrarMaterias();
                                    //system("6"); // Pausa
                                    break;
                                 case 9:
                                    // Lista de instrucciones de la opción 4
                                    eliminarMaterias();
                                    //system("6"); // Pausa
                                    break;
                                case 0:
                                    repetir = false;
                                    break;
                            }
                        } while (repetir);

            }

