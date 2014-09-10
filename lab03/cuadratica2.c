#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  float a;
  float b;
  float c;

  float x_1;
  float x_1_im;
  float x_2;
  float x_2_im;

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
    x_1 = (-1*b)/(2*a);
    x_1_im = sqrt(-1 * discriminante)/(2*a);

    x_2 = x_1;
    x_2_im = -1 * x_1_im;

    printf("raiz 1: (%.2g, %.4g)\n", x_1, x_1_im);
    printf("raiz 2: (%.2g, %.2g)\n", x_2, x_2_im);
  }

  return 0;
}
