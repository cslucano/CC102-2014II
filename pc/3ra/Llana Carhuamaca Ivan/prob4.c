#include<stdio.h>
#include<stdlib.h>
#define TAM 100	
int main(){
	char a[TAM+1];
	char b[TAM+1];
	char c[TAM+1];
	int i,j;
	printf("Introduzca la cadena 1: \n");
	gets(a);
	printf("Introduzca la cadena 2: \n");
	gets(b);
	for(i=0;b[i]!='\0';i++)
		{
		for(j=0;a[j]!='\0';i++)
			{
			if(a[j]==b[i])
				{
					a[i]=='1';
				}
			}
		}
	j=0;
	for(i=0;a[i]=='\0';i++)
		{
		if(a[i]!='1')
			{
			c[j]=a[i];
			j++;
			}
		}
	printf("%s",c);		
}
