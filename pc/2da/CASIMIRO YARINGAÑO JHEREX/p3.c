#include<stdio.h>
void darvalor(int v[4])
{ 
   int i;
   for(i=0;i<4;i++)
   v[i]=rand()%9+1;
}
void vervalor(int v[4])
{
   int i=0;
   for(i=0;i<4;i++)
   printf("%d ",v[i]);
   printf("\n");
}
void menor(int v1[4], int v2[4],int v3[4])
{
   int i,min1,min2,min3,mint,menor[3];
   for(i=0;i<4;i++)
   {
     if(i==0)
     min1=v1[i];
     else
     {
      if(v1[i]<min1)
      min1=v1[i];
     }
   }
   for(i=0;i<4;i++)
   {
     if(i==0)
     min2=v2[i];
     else
     {
      if(v2[i]<min2)
      min2=v2[i];
     }
   }
   for(i=0;i<4;i++)
   {
     if(i==0)
     min3=v3[i];
     else
     {
      if(v3[i]<min3)
      min3=v3[i];
     }
   }
   for(i=0;i<3;i++)
   {
     if(i==0)
     menor[i]=min1;
     else
     { 
     if(i==1)
     menor[i]=min2;
     else
     menor[i]=min3;
     }
   }
   for(i=0;i<3;i++)
   {
     if(i==0)
     mint=menor[i];
     else
     {
      if(menor[i]<mint)
      mint=menor[i];
     }
   }
   printf("%d es el de menor calidad en la que Edelmira obtendra\n",mint);
}
int main()
{
   int v1[4],v2[4],v3[4];
   srand(time(NULL));
   darvalor(v1);
   vervalor(v1);
   darvalor(v2);
   vervalor(v2);
   darvalor(v3);
   vervalor(v3);
   menor(v1,v2,v3);
   return 0;  
}
