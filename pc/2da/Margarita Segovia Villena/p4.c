#include<stdio.h>
#define TAM 50

int ordenar (int n,int a[])
{
	int i,j,aux;

	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
			aux=a[j];			
			a[j]=a[i];
			a[i]=aux;
			}
		}
	}

return a;
}




int main (void)
{
	int	n,i;
	int a[TAM+1],b[TAM+1];

	printf("Ingrese el numero de elementos de coordenadas (x,y): \n");
	scanf("%d",&n);

	for(i=0;i<n;i++){
	printf("x: ");
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	printf("y: ");
	scanf("%d",&b[i]);
	}	

	a[n]=ordenar(n,a); 
	b[n]=ordenar(n,b);



	

	




}














