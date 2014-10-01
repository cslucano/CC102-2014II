#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
  float seno[20];
  float seno_prima[20];

  float PI = 3.1415;
  int n;
  for(n=0; n<20; n++)
  {
    seno[n] = sin(n/2.0);
  }

  for(n=0; n<19; n++)
  {
    seno_prima[n] = (seno[n+1]-seno[n])/(2*PI);
  }

  for(n=0; n<20; n++)
  {
    printf("%g, %g\n", seno[n], seno_prima[n]);
  }

  return 0;
}
