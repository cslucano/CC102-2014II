#include<stdio.h>

int juegomayor(int a[],int b[],int n)
{
	int i,j,s=0;
	printf("Introduzca en orden las cartas de Juan\n");
	for(i=0;i<n;i++)
	{
	if(i==0)
	{
	scanf("%d",&a[i]);
		while(a[i]>2*n || a[i]<1)
		{
		printf("Introduzca un valor permitido ");
		scanf("%d",&a[i]);	
		}
	}
	else
	{
	scanf("%d",&a[i]);
		while(a[i]>2*n || a[i]<1)
		{
		printf("Introduzca un valor permitido ");
		scanf("%d",&a[i]);	
		}
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
			printf("Introduzca un valor permitido ");
			scanf("%d",&a[i]);
			}
		}
	}
	}
	printf("Introduzca en orden las cartas de Ana\n");
	for(i=0;i<n;i++)
	{
	if(i==0)
	{
	scanf("%d",&b[i]);
		while(b[i]>2*n || b[i]<1)
		{
		printf("Introduzca un valor permitido ");
		scanf("%d",&a[i]);	
		}
		for(j=0;j<n;j++)
		{
			if(b[i]==a[j])
			{
			printf("Introduzca un valor permitido ");
			scanf("%d",&b[i]);
			}		
		}
	}
	else
	{
	scanf("%d",&a[i]);
		while(a[i]>2*n || a[i]<1)
		{
		printf("Introduzca un valor permitido ");
		scanf("%d",&b[i]);	
		}
		for(j=0;j<i;j++)
		{
			if(b[i]==b[j])
			{
			printf("Introduzca un valor permitido ");
			scanf("%d",&b[i]);
			}
		}
		for(j=0;j<n;j++)
		{
			if(b[i]==a[j])
			{
			printf("Introduzca un valor permitido ");
			scanf("%d",&b[i]);
			}		
		}			
		if(a[i]>b[i])
		{
		s++;
		}
	}
	}
	printf("El puntaje de Juan sera: %d\n",s);
}

int main()
{
	int n;
	printf("Introduzca la cantidad de cartas de cada jugador: ");
	scanf("%d",&n);
	int J[n],A[n];
	juegomayor(J,A,n);
}
	
