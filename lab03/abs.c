#include <stdio.h>
#include <stdlib.h>

int main() {
  double x = -3.46;

  double y;

  if ( x < 0 ) {
     y = -1 * x;
  }
  else {
     y = x;
  }
  printf("abs(%g) = %g\n", x, y);
  

  return 0;
}
