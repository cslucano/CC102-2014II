#include <stdio.h>

int main(){
	int n,i;
		
	do{	
	printf("ingrese el numero de cartas\n");
	scanf("%d",&n);
	}while(n%2!=0);
	int m[n],p1[n/2],p2[n/2];
	
	for(i=0;i<n;i++){
		m[i]=i+1;
		printf("%d\n",m[i]);
	}
	for(i=0;i<n/2;i++){
		for(j=0;j<i+1;j++){
		if(p2[i]<p1[i])
			printf("punto para juan\n");
				
	}
}
}
