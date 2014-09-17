#include <stdio.h>
#include <stdlib.h>

int main() {
  int a;
  int b;
  int resto;

  a = 30;
  b = 154;
  
  resto = a % b;
  
  while(resto != 0)  
  {
      a = b;
      b = resto;
      resto = a%b;
  }
  
  printf("el MCD es %d\n", b);

  return 0;
}
