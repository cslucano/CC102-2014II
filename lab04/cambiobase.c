#include <stdio.h>
#include <stdlib.h>

int main () {
  int base10;
  int resto;
  int divisor;

  base10 = 10;
  int cociente = base10;
  while(cociente>=2)
  {
    divisor = cociente;
    cociente = divisor/2;
    resto = divisor%2;
    printf("%d", resto);
  }
  printf("%d", cociente);
  
  return 0;
}
