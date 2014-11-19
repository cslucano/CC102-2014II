#include<stdio.h>
#include<stdlib.h>
int main()
{
int n, a, b, c, d, n1, n2, n3;
printf("ingrese costo del plato mayor de 10 soles y menor de 50 soles:");
scanf("%d",&n);
if(n>=10 && n<=50){
a=n/10;
n2=n%10;
if(n2>=5)
{
   b=n2/5;
   n3=n2%5;
   if(n3>=2)
   {
      c=n3/2;
      d=n3%2; 
   }
   else
   {
   c=n3/2;
   d=n3%2;
   }  
}
else
{
   b=0;
   if(n2>=2)
   {
      c=n2/2;
      d=n2%2; 
   }
   else
   {
   c=n2/2;
   d=n2%2;
   } 
}
printf("Se utilizo %d de 10 \n",a);
printf("Se utilizo %d de 5  \n",b);
printf("Se utilizo %d de 2  \n",c);
printf("Se utilizo %d de 1  \n",d);
}
else
printf("el plato cuesta mas de 50 soles o menos de 10 soles\n");
return 0;
}
