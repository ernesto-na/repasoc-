#include"Figura.h"
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

        int main()
            {
                    cout<<"Calculo de Areas Figuras"<<endl;
                    Figura cuadrado;//(5.0,10.0);
                    cuadrado.setBase(100.0);
                    cuadrado.setAltura(100.0);
                    cout<<cuadrado.calculaArea()<<endl;

                    Figura triangulo;
                    cout<<triangulo.calculaArea(4,3.0,2)<<endl;

                    Figura circulo;
                    cout<<circulo.calculaArea(105.0)<<endl;

                    Figura trapecio;
                    cout<<"trapecio "<<trapecio.calculaArea(20.0,10.0,8.0,2)<<endl;

            }
