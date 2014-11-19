#include<stdio.h>
#include<math.h>
int main(){
float x,arctang,n,p,termino_n,N;
x=(5.0/7.0);
/*el valor de arctan5/7 real es */
for(n=0,arctang=0;arctang-0.620249<=0.00001;n++){
    p=2*n+1.0;
    N=(pow(-1,n))/p;
    termino_n=N*pow(x,p);
    
    arctang=arctang+termino_n;
        }
printf("el valor de arctangente de 5/7 es:%.5f\n",arctang);


;return 0;
}
