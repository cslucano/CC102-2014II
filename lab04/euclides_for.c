#include <stdio.h>
#include <stdlib.h>

int main() {
  int a;
  int b;
  int resto;

  a = 30;
  b = 154;
  
  for(resto = a % b; resto!= 0; resto= a%b) {
      a = b;
      b = resto;
  }
  
  printf("el MCD es %d\n", b);

  return 0;
}
