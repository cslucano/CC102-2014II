#include <stdio.h>
#include <stdlib.h>
int main(){
 int i,k,p,b,d,c,x,y;
 int m=0;
 int r=0;
 printf("las diferencias de monedas seran:\n");
 for(i=10;i<51;i++){
  do{
    if(x=1){
     b=i;
     k=b/13;
     m=m+k;
     b=b-13*k;}
     if(x=2){
     k=b/7;
     m=m+k;
     b=b-7*k;}
     if(x=3){
     k=b/3;
     m=m+k;
     b=b-3*k;}
     if(x=4){
     m=m+b;}
    x++;
   }while(x<5 && b!=0);
  do{
    if(y=1){
     c=i;
     p=c/10;
     r=r+p;
     c=c-10*p;}
     if(y=2){
     p=c/5;
     r=r+p;
     c=c-5*p;}
     if(y=2){
     p=c/2;
     r=r+p;
     c=c-2*p;}
     if(x=4){
     r=r+p;}
    x++;
   }while(x<5 && c!=0);
  d=m-r;  
  if(d>=0){
    d=d;
    printf("%d",d);}
  if(d<0){
    d=-d;
    printf("%d",d);}
 printf("\n");
 }
 return 0;
}
