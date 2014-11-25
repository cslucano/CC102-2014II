#include<stdio.h>
#include<string.h>
#define TALLA 80

int main (void)
{
	int i,j,l;
	char a[TALLA+1];

	printf("entrada: ");
	gets(a);

	l=strlen(a);

	for(i=0;i<l;i++){
		if(a[i]==a[i+1]){
			for(j=i+2;j<l;j++)
			a[i]=a[j];
		
		}
	}

	printf("salida: %s\n",a);








}









