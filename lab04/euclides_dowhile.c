#include <stdio.h>
#include <stdlib.h>

int main() {
  int a;
  int b;
  int resto;

  a = 30;
  b = 154;
  
  do {
      resto = a%b;
      a = b;
      b = resto;
  } while(resto != 0);
  
  printf("el MCD es %d\n", a);

  return 0;
}
