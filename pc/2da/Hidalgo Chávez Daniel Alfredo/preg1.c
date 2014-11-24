#include <stdio.h>
int devolucion(int a[], int b[], int m);
void main(){
   int N,puntos,k;
   printf("Elija la cantidad de cartas: ");
   scanf("%d",&N);
   int juan[N], ana[N];
   printf("Cartas de Juan menores o iguales a %d:\n",N*2);
   for(k=0;k<N;k++)
      scanf("%d",&juan[k]);
   printf("Cartas de ana menores o iguales a %d y diferentes a las de juan:\n",N*2);
   for(k=0;k<N;k++)
      scanf("%d",&ana[k]);
   puntos=devolucion(juan,ana,N);
   printf("%d\n",puntos);   
}
int devolucion(int a[], int b[], int m){
   int i,j=0;
   for(i=0;i<m;i++){
      if(a[i]>b[i])
         j++;}
   return j;
}
