#include <iostream>
#include "Complex.h"

using namespace std;



complexNumber initComplex(int a, int b){
  complexNumber num;
  num.real = a;
  num.imaginaria = b;
  return num;
}

void printComplex(complexNumber num){
  cout<<"O valor do numero é "<<": "<<num.real<<" + "<<num.imaginaria<<"i"<<endl;
  
}
complexNumber Soma(complexNumber a, complexNumber b){
  complexNumber c;

  c.real = a.real + b.real;

  c.imaginaria = a.imaginaria + b.imaginaria;

    return c;
  
}
bool ehReal(complexNumber a){
  return (a.imaginaria == 0);
}

complexNumber copiar(complexNumber a, complexNumber b){
  
  b = a;
  return b;
}
