#include<stdio.h>
int main(){
	int i,j;
	char cad[100];
	gets(cad);
	for(i=0;cad[i]!='\0';i++){
		if(cad[i]==cad[i+1]){
			for(j=i;cad[j]!='\0';j++){
				cad[j]=cad[j+1];
					};i--;
			
			
		};};
	puts(cad);
	return 0; }			
