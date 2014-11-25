#include <stdio.h>
#include <stdlib.h>
#define TAM 81

int main(){
char cad[TAM];
int cont[TAM];
int i, j ;


puts("ingrese cadena\n");
gets("%s",cad[TAM]);


for(i=0;i<TAM;i++){
	for(j=i;j<TAM;j++){
		if(cad[i]==cad[j]){
		cont[i]++;
}
}
}

for(i=0;i<TAM;i++){
printf("%c%d",cad[i],cont[i]);
}

return 0;
}


