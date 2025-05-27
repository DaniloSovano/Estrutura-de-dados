#include <iostream>
#include "Complex.h"
using namespace std;


complexNumber a,b,c;
  

int main(){

a = initComplex(2,5);
printComplex(a);

b = initComplex(10, 10);
printComplex(b);

c = Soma(a,b);
printComplex(c);  

if(ehReal(c)){
  cout<<"O numero é real"<<endl;
} else{
  cout<< "O numero não é real"<<endl;
}

b = copiar(a,b);
printComplex(b);

  return 0;
}
