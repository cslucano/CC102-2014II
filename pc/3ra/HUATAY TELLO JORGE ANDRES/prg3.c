#include <stdio.h>
#define TAM 81

int main(){
int i,j;
char cad[TAM],cad1[TAM];

puts("ingrese cadena");
gets(cad);

for(i=0,j=0;i<TAM && cad[i]!='\0';i++){
	if(cad[i]==cad[i+1]){
	cad1[j]==cad[i];
	i++;
	}
cad1[j]=cad[i];
}

printf("%s\n",cad1);

return 0;
}

