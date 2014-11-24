#include<stdio.h>

int equilibrio(int a[][3],int n)
{
	int s=0;
	int i,j;
	printf("Introduzca las cordenadas x,y,z de cada vector fuerza: \n");
	for(i=0;i<n;i++)
	{		
		scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
	}
	for(j=0;j<3;j++)
	{
		for(i=0;i<n;i++)
		{
			s=s+a[i][j];
		}
		if(s!=0)
		{
		j=2;
		}
	}
	if(s!=0)
	printf("No esta en equilibrio\n");
	else
	printf("Esta en equilibrio\n");
}
int main(){
	int n;
	printf("Introduzca la cantidad de vectores: ");
	scanf("%d",&n);
	int a[n][3];
	equilibrio(a,n);

}

