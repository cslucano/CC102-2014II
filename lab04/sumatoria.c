#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double sumatoria(int num_terminos) {
  double sumatoria;
  double termino;

  int n = 0;
  

  sumatoria = 0;

  while(n<num_terminos)
  {
    termino = pow(-1, n) * pow(n+1,n+1);
    sumatoria = sumatoria + termino;
    n = n + 1;
  }

  return sumatoria;
}

int main() {

 

  double s = sumatoria(5);

  printf("sumatoria = %g\n", s);
  
  return 0;
}

