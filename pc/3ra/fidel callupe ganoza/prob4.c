#include <stdio.h>
#include <string.h>
#define MAXLON 80
int main()
{
	char a[MAXLON+1],b[MAXLON+1];
	int l,m,L,n,i;
	printf("ingrese cadena (max 80 caract.):\n");
	gets(a);
	printf("ingrese otra cadena (max 80 caract.):\n");
	gets(b);
	//leemos longitud de la cadena
	l=strlen(a);
	printf("%d\n",l);
	L=strlen(b);
	printf("%d\n",L);
//eliminamos los valores repetidos
	for (m=0;m<L;m++)
	{
	for (n=0;n<l;n++)
	{
 	for (i=0;i<l;i++)	
	{	 
		if (a[i]==b[m])
		for (i=i;i<l;i++)
			{
			 a[i]=a[i+1];
			}
	}
	}
	}
	a[i]='\0';
	printf("%s\n",a);
	return 0;
}
