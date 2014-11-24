#include <stdio.h>
#include <stdlib.h>
void genera(int cad1[],int cad2[],int n){
 int i=0;
 int d,k;
 d=2*n;
 srand(time(NULL));
 for(;i<d;i++){
    if(i<n)
      cad1[i]=rand()%d+1;
    if(i>n)
      cad2[i-n]=rand()%d+1;
    }
}
void imprimir(int cad[],int n){
 int i=0;
 for(;i<n;i++){
   printf("%d,",cad[i]);
   if(i==n-1)
    printf("%d",cad[i]);}
 printf("}");
}
int main(){
 int n,resultjuan,i,d,j;
 printf(" inserte numero :");
 scanf("%d",&n);
 int juan[n],ana[n];
 genera(juan,ana,n);
 resultjuan=0;
 for(i=0;i<n;i++){
   if(juan[i]>ana[i])
      resultjuan++;}
 printf("juan:");
 imprimir(juan,n);
 printf("\nana:");
 imprimir(juan,n);
 printf("\nDevuelve: %d",resultjuan);
 return 0;
}
