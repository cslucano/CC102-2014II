#include <stdio.h>
#include <string.h>
#define tam 100
int main(){
	char cadena[tam +1];
	char i,j,m,longitud;
	printf("entrada ");
	gets(cadena);
	longitud=strlen(cadena);
	for(j=0;j<longitud;j++){	
	for(i=0;i<longitud;i++){
		if(cadena[i]==cadena[i+1]){
			for(m=i;m<longitud;m++){
			cadena[m]=cadena[m+2];
			}
		}
		}
	}
	puts(cadena);
}
