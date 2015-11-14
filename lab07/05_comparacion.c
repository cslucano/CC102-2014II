#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char * hola = "hola";
    char * mundo = "hola ";

	printf("%d",strcmp(hola, mundo));
	if(strcmp(hola, mundo)==0)
	{
		printf("%s = %s\n", hola, mundo);
	}
	else if (strcmp(hola, mundo)<0)
	{
		printf("%s < %s\n", hola, mundo);
	}
	else if (strcmp(hola, mundo)>0)
	{
		printf("%s > %s\n", hola, mundo);
	}

	return 0;
}
