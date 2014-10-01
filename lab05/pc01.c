#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  float suma;

  int n;
  float termino_n;

  float x_0 = 5.0/7;

  suma = 0;
  termino_n = 100;
  for ( n=1; fabs(termino_n)> 1e-5; n++) {
    termino_n = pow(-1, n) /(2*n+1) * pow(x_0, 2*n+1);
    suma = suma + termino_n;
  }

  printf("suma: %g\n", suma);
  printf("tolerancia: %g\n", fabs(termino_n));

  return 0;
}
