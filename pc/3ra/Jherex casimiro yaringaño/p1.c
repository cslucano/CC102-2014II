#include<stdio.h>
#include<string.h>
void funcion(char cad[100],int fre[58],int n)
{
	int i;
	char j;
	for(j=65;j<123;j++)
	{
	    fre[j]=0;
		for(i=0;i<n;i++)
		{
		   if(cad[i]==j)
		   fre[j]++;
		}	
	}
}
void imprimir(int fre[58])
{
	char i,j;
	for(i=65;i<123;i++)
	{
		if(fre[i]!=0)
		{
			printf("%c : %d\n",i,fre[i]);	
		}
	}
        printf("\n");
}
int main()
{
	char cad[100];
	int fre[26];
	int n;
	printf("escribre:");
	gets(cad);
	n=strlen(cad);
	funcion(cad,fre,n);
	imprimir(fre);
	return 0;
}
