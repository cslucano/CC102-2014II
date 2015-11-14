#include <stdio.h>
#include <string.h>
#define MAXLON 80
int main()
{
	char a[MAXLON+1];
	int l,i,s,m;
	printf("ingrese cadena (max 80 caract.):\n");
	gets(a);
	//leemos longitud de la cadena
	l=strlen(a);
	printf("%d\n",l);
//eliminamos los valores repetidos
	for (m=0;m<l;m++)
	{
 	for (i=0;i<l;i++)	
	{	
		if (a[i]==a[i+1])
		for (i=i;i<l;i++)
			{
			 a[i]=a[i+1];
			}
	}
	}
	a[i]='\0';

	printf("%s\n",a);
	return 0;
}
