#include <stdio.h>
#include<iostream>
using namespace std;
class Figura
{
      private:
              float base,altura,area;

      public:
             Figura()
             {
             base=0.0;
             altura=0.0;
             area=0.0;
             }
             Figura(float base,float altura)
             {
              setBase(base);
              setAltura(altura);
              //setArea(area);
              }

    void setBase(float base)
             {
                  this->base=base>0.0?base:0;
             }
    float getBase()
             {
                   return base;
             }


    void setAltura(float altura)
             {
                  this->altura=altura>0.0?altura:0;
             }
    float getAltura()
             {
                   return altura;
             }

     void setArea(float area)
             {
                  this->area=area>0.0?area:0;
             }
    float getArea()
             {
                   return area;
             }

              float calculaArea(){
               cout<<"cuadrado"<<endl;
              return getBase()*getAltura();
             }
              float calculaArea(float b,float a){
              return a*b;
             }

             float calculaArea(float b,float a,int formula){
                 //formula base x altura sobre 2
                 cout<<"triangulo"<<endl;
              return a*b/formula;
             }

             float calculaArea(float radio){
                 //formula pi por radio al cuadrado
                 cout<<"circulo"<<endl;
              return 3.1415*(radio*radio);
             }

              float calculaArea(float Bmayor, float Bmenor, float altura,int dos){
                 //formula [(Base mayor + base menor)/2]h
                 cout<<"trapecio"<<endl;
                 float res =((Bmayor+Bmenor)/dos)*altura;
              return res;
             }




};

