#include<stdio.h>
//void eliminar(frase,palabra);
int main(){
char frase[60];
char palabra[60];
int i,j,t;
	printf("introdusca la frase: \n");
	scanf("%s",frase);
	
	printf("introdusca la frase: \n");
	scanf("%s",palabra);
	//eliminar(frase,palabra);
	
	//void eliminar(frase,palabra){
	
	for(i=0;frase[i]!='\0';i++){
	t=0;
	    for(j=0;palabra[j]!='\0';j++){
	        if(frase[i]==palabra[j]){
	        t++;
	        }
        }
        if(t==0){
        printf("%c",frase[i]);
        }	    
	    
	
	
	}
	printf("\n");
	return 0;}
