#include <stdio.h>
#include <stdlib.h>
int suma(int cad[][3],int n){
 int i=0,j=0,suma=0;
 for(;i<3;i++){
   for(;j<n;j++){
     suma=suma+cad[j][i];}
   if(suma!=0)
     return 1;}
  return 0;
 }
int main(){
  int n,i,r;
  printf("ingrese numero de vectores: ");
  scanf("%d",&n);
  int vectores[n][3];
  printf("ingrese vectores(x y z):");
  for(i=0;i<n;i++){
   scanf("%d%d%d",&vectores[i][1],&vectores[i][2],&vectores[i][3]);}
  r=suma(vectores,n);
  if(r=1)
    printf("Devuelve: NO");
  if(r=0)
    printf("Devuelve: SI");
  return 0;
}
