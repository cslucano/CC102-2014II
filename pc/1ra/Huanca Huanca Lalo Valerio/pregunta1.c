#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{

    
     int m=100;
     int i;
     float aux1;
     float aux2;
     float suma=0;
     float p=5/3;
     
     for(i=0;i<=m;m++)
     {
       aux1=pow(p,2*i+1);
       aux2=(pow(-1,i))/(2*i+1);
       suma=suma+aux1*aux2;
       }
       
     printf("arcotan(5/7)=%.5f\n",suma);

  return 0;
}

