#include<stdio.h>
int main()
{
   int n;
   int i;
   int j;
   int sum1=0;
   
   printf("numero de fuerzas\n");
   scanf("%d",&n);
   int b=3*n;
   int a[b];
   for(i=0;i<b;i++)
   {
       scanf("%d",&a[i]);
       }
    
       
  for(i=0;i<2;i++)
  {
      sum1=a[i];
      for(j=3+i;j<b;j+3)
      {    
              sum1+=a[j];
              }
       printf("sum%d:%d\n",i,sum1);
              
   }
   return 0;
   }
          
           
