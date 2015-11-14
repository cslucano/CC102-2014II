#include <stdio.h>
#include <string.h>
#define MAXLON 80
int main()
{
	char a[MAXLON+1];
	int l,i,m;
	printf("ingrese cadena (max 80 caract.):\n");
	gets(a);
	//leemos la longitud de la cadena
	l=strlen(a);
	printf("%d\n",l);
	//detectamos las letras adyacentes repetidas
	for (m=0;m<l;m++)
	{
 	for (i=0;i<l;i++)	
	{	 
		if (a[i]==a[i+1])
		for (i=i;i<l;i++)
			{
			 a[i]=a[i+2];
			}
	}
	}
	a[i]='\0';
	printf("%s\n",a);
	return 0;
}
