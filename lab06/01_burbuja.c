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


int main() 
{
    int num = 100000;
    double a[num];

    generar_arreglo(a, num);

    //imprimir_arreglo(a, num);

    int i;
    int j;
    double temp;
    for(i=0;i<num-1;i++)
    {
		for(j=i+1;j<num;j++)
		{
		    if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}	
		}
    }
	printf("\n");
	printf("\n");

	imprimir_arreglo(a, num);

	return 0;
}
