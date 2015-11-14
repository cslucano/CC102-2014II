#include<stdio.h>
#include<string.h>
int main()
{
	char frase[100],var[100];
	int cont=0,i;
	char c;
	c=' ';
	printf("Escribre una frase:");
	while(c!='\n')
	{
		scanf("%s%c",frase,&c);
                strcpy(var[cont],frase);
		cont++;
	}
        for(i=cont-1;i>0;i++)
	printf("%s",var[i]);
	return 0;
}

