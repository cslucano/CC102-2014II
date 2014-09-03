#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  double t0 = 0;
  double t;
  double paso = 3.1415/4;
  double y;
  
  t = t0;
  y=sin(t);
  printf("seno(%g) = %g\n", t, y);

  t = t+paso;
  y=sin(t);
  printf("seno(%g) = %g\n", t, y);

  t = t+paso;
  y=sin(t);
  printf("seno(%g) = %g\n", t, y);

  t = t+paso;
  y=sin(t);
  printf("seno(%g) = %g\n", t, y);

  return 0;
}

