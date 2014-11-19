#include <stdio.h>

int main(){

    int n,fila,col;
        /*escribir lado de rectangulo*/
    printf("lado de rectangulo: ");
    scanf("%d",&n);

    for(fila=1;fila<=n;fila++){
    		for(col=1;col<=n-fila;col++){
        printf("0");
        }
        for(col=1;col<=2*fila-1;col++){
 	      printf("*");
        }
        printf("\n");
    }
		return 0;
}

 
