#include <stdio.h>
#include <stdlib.h>

int main() {
  int x;
  int y;
  int z;
  int resto;

  x = 8;
  y = 3;

  z = x / y;
  resto = x % y;

  printf("cociente %d / %d = %d\n", x, y, z);
  printf("resto %d / %d = %d\n", x, y, resto);
   
  return 0;
}
