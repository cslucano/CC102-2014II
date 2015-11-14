#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char hola[100] = "Hola";
	
    char * mundo = " Mundo ";

	strcat(hola, mundo);

	printf("%s\n", hola);

	return 0;
}
