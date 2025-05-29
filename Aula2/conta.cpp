#include "conta.h"
#include <iostream>
using namespace std;


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

void verSaldo(Conta nome){

  cout<< "O saldo da conta é: ";
  cout<<nome.saldo<<endl;
  }

void deposito(Conta *nome){
  float valor;
  cout<< "Digite o valor do deposito"<<endl;
  cin>>valor;

  if (valor > 0) {
    nome->saldo += valor;
  } else{
    cout<< "Valor invalido";    
  }
}

void saque(Conta *nome){
  float valor;
  cout << "Digite o valor do saque"<<endl;
  cin>>valor;

  if (valor <= nome->saldo){
    nome->saldo -= valor;
    cout<<"Saque realizado com sucesso";
  }else{
    cout<< "Voce não tem saldo suficiente";
  }

}
