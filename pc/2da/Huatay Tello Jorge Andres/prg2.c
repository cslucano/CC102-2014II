#include <stdio.h>

int main(){

int n, p, i, j;
printf("ingrese numero de cartas");
scanf("%d",&n);
int juan[n/2], ana[n/2];


if(n%2==0){
     for(i=0;i<n/2;i++){
     printf("ingrese carta %d",i+1);
     scanf("%d",&juan[i]);
     }

     for(i=0;i<n/2;i++){
     printf("ingrese carta %d",i+1);
     scanf("%d",&ana[i]);
     }
}else printf("ingrese un numero par");



for(i=0, j=0; i<n/2;i++){
     if(juan[i]>ana[i]){
     j=j+1;
     }
     printf("%d",j);
}

return 0;
}


