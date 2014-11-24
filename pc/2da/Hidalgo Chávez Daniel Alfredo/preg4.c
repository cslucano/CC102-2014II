#include <stdio.h>
#include <math.h>
void area(int a[][2],int m);
void main(){
   int n,i,j;
   printf("Cantidad de puntos: ");
   scanf("%d",&n);
   int cor[n][2];
   for(i=0;i<n;i++)
      for(j=0;j<2;j++)
         scanf("%d",&cor[i][j]);
   area(cor,n);
}
void area(int a[][2],int m){
   int k,l,s,max=0;
   for(k=0;k<m;k++){
      s=sqrt(pow(a[k][0],2)+pow(a[k][1]));
      if(s>max)
         s=max;}
}
