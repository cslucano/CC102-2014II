#include<stdio.h>
int main(){
	char cad[100];char aux;
	int i ,j ,tam;
	gets(cad);
	for(tam=0;cad[tam]!='\0';){
		tam++;};
	for(i=0;cad[i]!='\0';i++){
		if(cad[i]==' '){
				for(j=0;j<i;j++){
					aux=cad[(tam-i)+j];
					cad[(tam-i)+j]=cad[j];
					cad[j]=aux;}};}
					
	; puts(cad);
	return 0 ; }
		
				
