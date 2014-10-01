#include <stdio.h>
#include <stdlib.h>

int main() {
  int notas[20];

  notas[0] = 12;
  notas[1] = 14;
  notas[19] = 16;


  printf("nota 1:%d\n", notas[0]);
  printf("nota 2:%d\n", notas[1]);
  printf("nota 19:%d\n", notas[18]);
  printf("nota 20:%d\n", notas[19]);

  return 0;
}
