

typedef struct {
  int real;
  int imaginaria;

} complexNumber;


complexNumber initComplex(int a, int b);
void printComplex(complexNumber num);
complexNumber Soma(complexNumber a, complexNumber b);
bool ehReal(complexNumber a);
complexNumber copiar(complexNumber a, complexNumber b);
