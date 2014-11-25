#include <stdio.h>
#include <string.h>
#define MAXLON 80
int main()
{
	char a[MAXLON+1],b[MAXLON+1];
	int l,i;
	printf("ingrese cadena (max 80 caract.):\n");
	gets(a);
	// leemos longitud de la cadena
	l=strlen(a);
	printf("%d\n",l);
	// invertimos cadena
	for (i=0;i<l;i++)
	{
		b[(l-1)-i]=a[i];
	}
	b[i]='\0';
	printf("%s\n",b);
	return 0;
}
