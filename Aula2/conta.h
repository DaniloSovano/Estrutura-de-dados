

typedef struct {
  int numero;
  float saldo;

} Conta;

Conta inicializar(Conta nome);

void verSaldo(Conta nome);

void deposito(Conta *nome);
void saque(Conta *nome);
  
