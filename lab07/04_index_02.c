#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char hola[] = "Hola Mundo";
	char * mundo;

	mundo = index(hola, 'M');

	printf("s1: %s\n", hola);	
	printf("s2: %s\n", mundo);

	printf("s1: %c\n", *(hola + 1));	
	printf("s2: %c\n", *(mundo + 1));

	return 0;
}
