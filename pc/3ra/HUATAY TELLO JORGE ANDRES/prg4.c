#include <stdio.h>
#include <stdlib.h>
#define TAM 81

int main(){
int i,j,k=0;
char cad1[TAM],cad2[TAM],cad3[TAM];

puts("ingrese cadena 1\n");
gets(cad1);
puts("ingrese cadena 2\n");
gets(cad2);

for(i=0;i<TAM;i++){
	for(j=0;j<TAM;j++){
		if(cad1[i]==cad2[j]){
		k++;
		}
	}
if(k==0){
cad3[i]=cad1[i];
}
k=0;
}

puts(cad3);
return 0;
}

