#include <stdio.h>
#define TAM 200

int main(){
	int JUAN[TAM],i,ANA[TAM],a,j,n,m;
  //pedimos la cantidad de cartas inicial
	printf("ingrese numero de cartas:");
	scanf("%d",&n);
 //ingresamos los numeros de las cartas
	for (i=0;i<n;i++){
		printf("ingrese cartas de juan %d :",i+1);
		scanf("%d",&j);
		JUAN[i]=j;
	}
	for (i=0;i<n;i++){
		printf("ingrese cartas de ana %d :",i+1);
		scanf("%d",&a);
		ANA[i]=a;
	}
   //imprimimos las cartas de ambos
	for (i=0;i<n;i++){
		printf("%d",JUAN[i]);
	}

	for (i=0;i<n;i++){
		printf("%d",ANA[i]);
	}
  //caso en el que juan gana al tener una carta mayor que la carta de ana
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			m=0;
			if (JUAN[i]>ANA[j])
			m++;
		}
	}
	//imprimimos el numero de casos en que juan gana
	printf("%d",m);
	return 0;
}

