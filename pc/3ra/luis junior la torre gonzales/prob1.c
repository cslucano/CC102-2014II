#include<stdio.h>
int main(){
	int i ,j,nmro,indicador;
	char cad[100];
	gets(cad);
	/*for(i=0;cad[i]!='\0';i++){
		for(j=i+1;cad[j]!='\0';j++){
			if(cad[i]==cad[j])
				nmro++;
		
		};}*/
	indicador=1;
	for(i=0;cad[i]!='\0';i++)
		{for(j=i,nmro=0;cad[j]!='\0';j++){
			if(cad[i]==cad[j]){
				nmro++;}
		
			printf("%c%d",cad[i],nmro);}}
	;return 0 ; }
			
