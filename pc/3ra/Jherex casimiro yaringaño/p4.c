#include <stdio.h>
#include <string.h>
#define TAM 80
int cmp(char c, char cad2[], int m){
 int i;
 for(i=0;i<m;i++){
  if(cad2[i]==c)
     return 2;}
 return 1;
 }
void funcion(char cad1[], char cad2[], int n, int m){
 int i,j,p;
 for(i=0;i<n;i++){
   p=cmp(cad1[i],cad2,m);
   if(p==1)
     printf("%c",cad1[i]);
  }
}
int main(){
 int n,m;
 char cad1[TAM+1],cad2[TAM+1];
 printf("cadena1:");
 gets(cad1);
 printf("cadena2:");
 gets(cad2);
 n=strlen(cad1);
 m=strlen(cad2);
 funcion(cad1,cad2,n,m);
 printf("\n");
 return 0;
}
