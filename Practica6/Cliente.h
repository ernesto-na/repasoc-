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
    Cliente(string,string,string,string,float,int);
    void mostrarCliente();
    

};