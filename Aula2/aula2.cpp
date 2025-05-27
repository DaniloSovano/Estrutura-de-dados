#include <iostream>
#include <string>
using namespace std;

typedef struct {
  int numero;
  float saldo;
  
} Conta;

Conta inicializar(Conta nome){

  int num;
  float sal;
  cout << "Digite o numero da conta"<<endl;
  cin>>num;
  nome.numero = num;
  cout << "Digite o saldo da conta"<<endl;
  cin>>sal;
  nome.saldo = sal;
  return nome;
}
Conta verSaldo(Conta nome){
    
  cout<< "O saldo da conta é: ";
  cout<<nome.saldo<<endl;
  return nome;
}

Conta deposito(Conta nome){
  float valor;
  cout<< "Digite o valor do deposito"<<endl;
  cin>>valor;

  if (valor > 0) {
    nome.saldo += valor;
  } else{
    cout<< "Valor invalido";    
  }
  return nome;
}

Conta saque(Conta nome){
  float valor;
  cout << "Digite o valor do saque"<<endl;
  cin>>valor;

  if (valor <= nome.saldo){
    nome.saldo -= valor;
    cout<<"Saque realizado com sucesso";
  }else{
    cout<< "Voce não tem saldo suficiente";
  }
  return nome;
}


int main() {
  Conta kael;
  kael = inicializar(kael);
  verSaldo(kael);
  kael =deposito(kael);
  verSaldo(kael);
  kael =saque(kael);
  verSaldo(kael);
}
