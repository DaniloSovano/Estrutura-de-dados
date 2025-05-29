#include <iostream>
#include <string>
#include "conta.h"
using namespace std;





int main() {
  
  Conta kael;
  
  kael = inicializar(kael);
  verSaldo(kael);  
  deposito(&kael);
  verSaldo(kael);
  saque(&kael);
  verSaldo(kael);
}
