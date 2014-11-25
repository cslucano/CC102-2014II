#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 100
int compara(char c, char cad2[], int n2){
 int i;
 for(i=0;i<n2;i++){
  if(cad2[i]==c)
     return 2;}
 return 1;
 }
void imprimir(char cad1[], char cad2[], int n1, int n2){
 int i,j,p;
 for(i=0;i<n1;i++){
   p=compara(cad1[i],cad2,n2);
   if(p==1)
     printf("%c",cad1[i]);
  }
}
int main(){
 int n1,n2;
 char cad1[T],cad2[T];
 gets(cad1);
 gets(cad2);
 n1=strlen(cad1);
 n2=strlen(cad2);
 imprimir(cad1,cad2,n1,n2);
 printf("\n");
 return 0;
}
