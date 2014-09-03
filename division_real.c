#include <stdio.h>
#include <stdlib.h>

int main() {
  int x;
  int y;
  double z;
  int resto;

  x = 8;
  y = 3;

  z = (double)x / y;

  printf("cociente %d / %d = %g\n", x, y, z);


  z = x / (double)y;

  printf("cociente %d / %d = %g\n", x, y, z);


  z = x / 3;

  printf("cociente %d / %d = %g\n", x, y, z);
   
  return 0;
}
