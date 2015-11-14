#include<stdio.h>
#include<string.h>
#define TALLA 80


int funcion (int m, int l, char a[])
{
	int j,k=0;	

	for(j=0;j<l;j++){
		if(a[m]==a[j])
		k++;
	}

return k;
}


int main (void)
{
	int i,j,l,m,p;
	char a[TALLA+1];

	printf("Ingrese una cadena: ");
	gets(a);

	l=strlen(a);

	for(m=0;m<l;m+=p){
	p=funcion(m,l,a);
	printf("%c%d",a[m],p);
	}
	puts("\n");

return 0;
}



	
