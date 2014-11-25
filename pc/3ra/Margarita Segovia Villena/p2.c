#include<stdio.h>
#include<string.h>
#define TALLA 80

int main (void)
{
	int i,j,longitud;
	char a[TALLA+1],b[TALLA+1],c[TALLA+1];


	printf("Ingrese una cadena: ");
	gets(a);


	
	longitud=strlen(a);

	printf("long=%d\n",longitud);	

	for(i=0,j=longitud-1;j!=-1;i++,j--)
	{
	b[i]=a[j];
	}
	b[i+1]='\0';

	printf("Cadena invertida: %s\n",b);


return 0;
}





