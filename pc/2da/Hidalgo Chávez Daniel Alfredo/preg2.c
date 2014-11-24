#include <stdio.h>
#define TAM 20
void suma(int a[][3],int t);
void main(){
   int n,i,j;
   printf("Numero de fuerzas sobre el cuerpo: ");
   scanf("%d",&n);
   int f[n][3];
   for(i=0;i<n;i++)
      for(j=0;j<3;j++)
         scanf("%d",&f[i][j]);
   suma(f,n);
}
void suma(int a[][3],int t){
   int k,l=0,s,aux=0;
   do{
      s=0;
      for(k=0;k<3;k++)
         s+=a[k][l];
      if(s==0)
         l++;
      else{
         printf("NO\n");
         aux=1;}
       }while(l<3&&aux==0);
   if(s==0)
      printf("SI\n");
}
