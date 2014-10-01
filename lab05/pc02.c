#include <stdio.h>
#include <stdlib.h>

 int main() {
   int x;
   int x_prima;
   int y;
   int y_prima;

   for(y=0; y<7; y++) {
     for(x=0; x<7; x++) {
       x_prima = x - 4;
       y_prima = y - 4 + 3;

       if ( abs(y_prima) <= abs(x_prima)) printf("X");
       else printf("0");
     }
    printf("\n");
   }

   return 0;
 }
