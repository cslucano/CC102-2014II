#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  float a;
  float b;
  float c;

  float x_1;
  float x_2;

  float discriminante;

  a = 1;
  b = -5;
  c = 8;

  discriminante = b*b - 4 * a * c;

  if ( discriminante > 0) {
    x_1 = (-1*b + sqrt(discriminante))/(2*a);
    x_2 = (-1*b - sqrt(discriminante))/(2*a);

    printf("raiz 1: %g\n", x_1);
    printf("raiz 2: %g\n", x_2);
  }
  else {
    printf("la ecuacion tiene raices complejas\n");
  }

  return 0;
}
