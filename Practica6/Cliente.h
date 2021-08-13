#include"Persona.h"
#include <stdio.h>
#include<iostream>
using namespace std;
class Cliente: public Persona{
    private:
    string codigoCliente;
    float totalCompra;
    int numCompras;

    public:
        Cliente()
                {
                    codigoCliente="000000";
                    totalCompra=18;
                    numCompras=0;
                }
    Cliente(string,string,string,string,float,int);

                void setCodigoCliente(string codigoCliente)
                    {
                        this->codigoCliente=codigoCliente.length()<=30?codigoCliente:"Error";
                    }
                string getCodigoCliente()
                    {
                        return codigoCliente;
                    }

    void mostrarCliente(){
        mostrarPersona();
        cout<<"---------------"<<endl;
        cout<<"Codigo del cliente: "<<getCodigoCliente()<<endl;
    }

    void leerCliente(){
        leerPersona();
        string auxCodigoCliente;
        cout<<"\n\tEscribe el codigo de cliente ";
        getline(cin,auxCodigoCliente);
        setCodigoCliente(auxCodigoCliente);
    }


};
