#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int j;
float suma, smnd, prd1, prd2, prd3;

for(j=0; abs(suma-35.53767)>0,00001; j = j + 1){
prd1 = pow(-1,j);
prd2 = pow(5/7,2*j+1);
prd3 = (1/(2*j+1));
smnd = prd1*prd2*prd3;
suma = suma + smnd;
printf("el arctan de 5/7 es %f\n", suma);
}

return 0;
}
