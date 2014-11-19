#include <stdio.h>
void main(){
	int n,f,c,j,k=1;
	printf("a)\n");
	for(f=1;f<=4;f++){
		for(c=3;c>f-1;c--){		
		printf("o");
		}
		for(c=0;c<2*f-1;c++){
		printf("*");
		}
		for(c=3;c>f-1;c--){		
		printf("o");
		}
	
	printf("\n");
	}
	for(f=3;f>0;f--){
		for(c=3;c>f-1;c--){		
		printf("o");
		}
		for(c=1;c<=2*f-1;c++){
		printf("*");		
		}
		for(c=3;c>f-1;c--){		
		printf("o");
		}
	
	printf("\n");
	}


	printf("b)\n");
	for(f=7;f>0;f--){
		for(c=7;c>f-1;c--){		
		printf("*");
		}
		for(c=1;c<=f-1;c++){		
		printf("o");
		}
		
	
	printf("\n");
	}




}

