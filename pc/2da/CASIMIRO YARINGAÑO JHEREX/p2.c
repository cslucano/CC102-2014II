#include<stdio.h>

void darvalor(int v[3])
{ 
   int i;
   for(i=0;i<3;i++)
   scanf("%d",&v[i]);
}
void vervalor(int v[3])
{
   int i=0;
   for(i=0;i<3;i++)
   printf("%d ",v[i]);
   printf("\n");
}
void suma(int s[3],int v[3])
{
   int i;
   for(i=0;i<3;i++)
   s[i]=s[i]+v[i];
}
void comparacion(int s[3],int nulo[3])
{
   int i=0,au=0;
   for(i=0;i<3;i++)
   { 
     if(s[i]==nulo[i])
     au++;
   }
   if(au==3)
   printf("SI\n");
   else
   printf("NO\n");
}
int main()
{
   int i,n,v[3],s[3]={0,0,0},nulo[3]={0,0,0};
   printf("numero de fuerzas:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   { 
      darvalor(v);
      vervalor(v);
      suma(s,v);
   }
   comparacion(s,nulo);
   return 0;
}
