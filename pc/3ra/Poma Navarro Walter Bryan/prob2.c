#include<stdio.h>
#include<string.h>
#define N 100
	int main(){
		char longitud,i,j;
		char cadena[N+1];
		printf("entrada: ");
		gets(cadena);
		longitud=strlen(cadena);
		for(i=0;i<longitud-1;i++){
			if(cadena[i]='a'){
				for(j=0;j<i;j++){
				printf("%c\n",cadena[j]);
			}
		}
		}
		return 0;
		
	}
	
	
  
