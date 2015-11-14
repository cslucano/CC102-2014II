#include<stdio.h>
#define TAM 60
int main(){
	char cad[TAM+1];
	int i,c;
	printf("Cadena: "); 
	gets(cad);
	
	i=0;
	
	while(cad[i]!='\0'){
		c=1;		
		while(cad[i+1]==cad[i]){
			c++;
			i++;
		}
		i++;		
		printf("%c%d",cad[i-1],c);
		
	}
	
	puts(" ");
		
	


return 0;
}
