#include<stdio.h>
#define TAM 60
int main(){
	char cad1[TAM+1],cad2[TAM+1];
	int i,j,k;	
	printf("Cadena1: "); 
	gets(cad1);
	printf("Cadena2: "); 
	gets(cad2);
	
	for(i=0;cad2[i]!='\0';i++){
		for(j=0;cad1[j]!='\0';j++){
			if(cad1[j]==cad2[i]){
				for(k=j;cad1[k+1]!='\0';k++)
					cad1[k]=cad1[k+1];
				cad1[k]=0;		
			}
		}
	}

	printf("%s\n",cad1);

return 0;
}

