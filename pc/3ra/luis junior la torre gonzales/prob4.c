#include<stdio.h>
void reemp(char cad1[] , char cad2[]){

	int i,j,k;
	for(i=0;cad1[i]!='\0';i++){
		for(j=0;cad2[j]!='\0';j++){
			if(cad1[i]==cad2[j]){
				for(k=i;cad1[k]!='\0';k++){
					cad1[k]=cad1[k+1];};
					i--;};}
						;}}



int main(){
	char cad1[100];
	char cad2[100];
	gets(cad1);
	gets(cad2);
	reemp(cad1,cad2);
	puts(cad1);
	
	return 0 ; }
	
