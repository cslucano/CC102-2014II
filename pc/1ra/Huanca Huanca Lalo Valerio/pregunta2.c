
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  int i,j,k;
  int p=4,m=4;
  
  printf("(a)\n");
  
  for(i=1;i<=4;i++)
   
   {
  
     for(j=0;j<=p;j++,p--)
         printf("o");
     for(k=0;k<=2*i-1;k++)
         printf("*");
     
     for(j=0;j<=m;j++,m--)
         printf("o");
      printf("\n");
      
  
  }
  
  
  printf("b\n");
  
   int r1,r2,r3;
 
  
  for(r1=1;r1<=7;r1++)
  {
     for(r2=1;r2<r1+1;r2++)
         printf("*");
     for(r3=1;r3<8-r1;r3++)
         printf("o");
      printf("\n");
  
  }
  
     
    
    
  return 0;
}

