#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void generar_arreglo(double A[], int num_elementos)
{
    int indice;
    for(indice = 0; indice < num_elementos; indice++)
    {
		A[indice] = rand()%1000000;      
    }
}

void imprimir_arreglo(double A[], int num_elementos)
{
    int indice;
    for(indice = 0; indice < num_elementos; indice++)
    {
		printf("A[%d] = %g\n", indice, A[indice]);      
    }
}

void mergesort(double A[], int ini, int fin)
{
  if(ini >= fin)
    return;
  int mid = (fin+ini)/2;
  mergesort(A, ini, mid);
  mergesort(A, mid+1,fin);

  double B[mid-ini+1];
  double C[fin-mid];
  int i;
  for(i=ini;i<=mid;i++)
    B[i-ini]=A[i];
  for(i=mid+1;i<=fin;i++)
    C[i-mid-1]=A[i];

  i=0;
  int j=0,n1=mid-ini+1,n2=fin-mid;
  while(i<n1 && j<n2)
  {
    if(B[i]<=C[j])
      A[ini+i+j]=B[i++];
    else
      A[ini+i+j]=C[j++];
  }
  while(i<n1)
    A[ini+i+j]=B[i++];
  while(j<n2)
    A[ini+i+j]=C[j++];
}

int main() 
{
    int num = 500000;
    double a[num];

    generar_arreglo(a, num);

    //imprimir_arreglo(a, num);
    mergesort(a, 0, num-1);

	printf("arreglo ordenado\n");
	printf("\n");

	//imprimir_arreglo(a, num);

	return 0;
}
