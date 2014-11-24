#include<stdio.h>

void Reposo(int f1[],int f2[],int f3[]);
void Escribir(int f[]);
int main() {
	int i, n=3, f1[3]={1,2,3}, f2[3]={4,6,9}, f3[3]={-5,-8,-12};
	printf("%d\n",n);
	Escribir(f1);
	Escribir(f2);
	Escribir(f3);
	
	Reposo(f1,f2,f3);

return 0;
}

void Escribir(int f[]){	
	int i=0;	
	for(;i<3;i++)
		printf(" %d ",f[i]);	
	
	printf("\n");
	
}

void Reposo(int f1[],int f2[],int f3[]) {
	int i=0, fneta[3];
	
	for(i=0;i<3;i++){
		fneta[i] = f1[i]+f2[i]+f3[i];		
	}
	
	if(fneta[0]==0 && fneta[1]==0 && fneta[2]==0)
		printf("Esta en reposo\n");
	
	else
		printf("No esta en reposo\n");			
					

}
