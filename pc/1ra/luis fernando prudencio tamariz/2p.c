#include <stdio.h>
#include <stdlib.h>
int main(){
 int i,j,d;
 printf("a)\n");
 for(i=1;i<8;i++){
  if(i>4)
    d=8-i;
  else 
    d=i;
  for(j=1;j<8;j++){
   if(j<=3+d && j>=5-d)
      printf("*");
   else 
      printf("0");
      }
  printf("\n");
   }
 printf("b)\n");
 for(i=1;i<8;i++){
   for(j=1;j<8;j++){
     if(j<i+1)
      printf("*");
     else 
      printf("0");
     }
   printf("\n");
   }
 return 0;  
}
