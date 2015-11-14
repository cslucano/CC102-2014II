#include<stdio.h>
#define TAM 60
int main(){
	char cad[TAM+1];
	int i,j;
	printf("Cadena: "); 
	gets(cad);
	i=0;
	while(cad[i]!='\0'){
		if(cad[i]==cad[i+1]){
			for(j=i;cad[j+2]!='\0';j++)
				cad[j]=cad[j+2];	
			cad[j]=cad[j+1]=0;
		} 
		else 
			i++;
	}
	printf("%s\n",cad);


return 0;
}
