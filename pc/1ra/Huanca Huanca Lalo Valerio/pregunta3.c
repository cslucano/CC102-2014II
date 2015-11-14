#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  int n;
  int p;
  int p1;
  
  printf("inrese el valor de la compra:\n");
  scanf("%d",&n);
  
    printf("mistura\n");
   
      p=n/13;
      p1=n%13;
      printf("%d:monedas de 13\n",p);
      
         if(p1>=7)
            {
             p=p1/7;
             p1=p1%7;
             printf("%d:monedas de 7\n",p);
            }
         if(p1>=3)
           {
             p=p1/3;
             p1=p1%3;
             printf("%d:monedas de 3\n",p);
            }
        if(p1>=1)
            {
              p=p1/1;
              p1=p1%1;
             printf("%d:monedas de 1\n",p);
            }
     
      
     
    
       printf("nuevo soles\n");
   
      p=n/10;
      p1=n%10;
      printf("%d:monedas de 10\n",p);
      
         if(p1>=5)
            {
             p=p1/5;
             p1=p1%5;
             printf("%d:monedas de 5\n",p);
            }
          else if(p1>=2)
           {
             p=p1/2;
             p1=p1%2;
             printf("%d:monedas de 2\n",p);
            }
         else if(p1>=1)
            {
              p=p1/1;
              p1=p1%1;
             printf("%d:monedas de 1\n",p);
            }
     
      
     
    
    
   
    return 0;
}

