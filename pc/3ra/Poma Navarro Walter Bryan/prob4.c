#include<stdio.h>
#include<stdlib.h>
#define N 100	
#define TAM 100	
int main(){
	char cad1[TAM+1];
	char cad2[TAM+1];
	char cad3[TAM+1];
	int i,j;
	printf(" cadena 1: \n");
	gets(cad1);
	printf(" cadena 2: \n");
	gets(cad2);
	for(i=0;cad2[i]!='\0';i++)
		{
		for(j=0;cad2[j]!='\0';i++)
			{
			if(cad1[j]==cad2[i])
				{
					cad1[i]=='1';
				}
			}
		}
	j=0;
	for(i=0;cad1[i]=='\0';i++)
		{
		if(cad1[i]!='1')
			{
			cad3[j]=cad1[i];
			j++;
			}
		}
	printf("%s",cad3);		
}

