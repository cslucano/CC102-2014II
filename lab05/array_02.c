#include <stdio.h>
#include <stdlib.h>

int main() {
  int notas[20];

  int n;
  for(n=0; n<20; n++)
  {
    notas[n] = random()%21;
  }

  for(n=0; n<20; n++)
  {
    printf("nota %d:%d\n", n+1,notas[n]);
  }

  return 0;
}
