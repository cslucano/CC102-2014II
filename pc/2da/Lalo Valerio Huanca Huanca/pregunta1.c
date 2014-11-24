#include<stdio.h>

void arreglos(int a[],int b[],int n);
int devuelve(int a[],int b[],int n);
//int mayor(
int main()
{
   
   int k,n;
   printf("tamaño de las cartas par\n");
   scanf("%d",&n);
   int a[n/2];
   int b[n/2];
   arreglos(a,b,n/2);
  
   k=devuelve(a,b,n/2);
   printf("Devuelve:%d\n",k);
   return 0;
   }
   
void arreglos(int a[],int b[],int n)
  
  {
   
   int i,j;
   printf("ingrese los arreglos\n");
   printf("Arreglo juan\n");
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
    }
     
   printf("Arreglo Ana\n");
   for(j=0;j<n;j++)
     {
      scanf("%d",&b[j]);
      }
      
   }
      
      
      
int devuelve(int a[],int b[],int n)
 
 
  {
  int i;
  int k=0;
  for(i=0;i<n;i++)
    {
      if(a[i]>b[i])
      k++;
      }
  return k;
  }
  
  
  
  
   
     
