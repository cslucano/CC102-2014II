#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
float a, n, q,v=1,sum=0, x, b;
x=5.0/7.0;
for(n=1;n<100;n++)
{
   a=(2*n)+1;
   b=pow(x,a);
   q=b/a;
   if(v==1)
   {
      sum=sum-q;
      v=2;
   }
   else
   {
      sum=sum+q;
      v=1;
   }
}
printf("artan(5/7)= %.5f\n",sum);
return 0;
}
