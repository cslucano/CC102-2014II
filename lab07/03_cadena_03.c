#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char hola[] = "Hola Mundo";

    int i;
 	for(i=0;i<strlen(hola);i++)
	{
		if(hola[i]>='a' && hola[i]<='z')
		{
			printf("%c", hola[i] - 'a' + 'A' ); 
		} 
		else if(hola[i]>='A' && hola[i]<='Z')
		{
			printf("%c", hola[i] - 'A' + 'a' ); 
 		} else {
			printf("%c", hola[i]); 
        }
	}
	printf("\n");

	return 0;
}
