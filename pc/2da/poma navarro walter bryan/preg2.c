#include <stdio.h>
int main(){
	int vec,i,suma=0,suma2=0,suma3=0;
	printf("ingrese cantidad de vectores\n");
	scanf("%d",&vec);
	int a[vec],b[vec],c[vec];	
	for(i=0;i<vec;i++){
		printf("ingrese las coordenadas x,y,z\n");	
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
	}
	for(i=0;i<vec;i++){
		suma=suma+a[i];
                suma2=suma2+b[i];
                suma3=suma3+c[i];
	}			
	if(suma==suma2  && suma==suma3 && suma==0){
			printf("esta en equilibrio\n");			
				}
	else {
	printf("no esta en equilibrio\n");
	}
return 0;
}

