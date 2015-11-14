#include<stdio.h>
#include<stdlib.h>
int puntojuan(int a[], int J[])
{
int i,j,puntoj=0;

for(i=0;i<n/2;i++){
	
if(a[i]<J[i]){
puntoj++;
}
	
}



return puntoj;
}
int main(){

int n,m,i,j,k;

printf("ingrese numero de cartas a jugar:\n");

scanf("%d",&n);

	for(i=0;i<n/2;i++){
	a[i]=srand(time(NULL))%n+1;
	}

	for(j=0;j<=n/2;j++){
		m=srand(time(NULL)%n +1);
		for(k=0;j<n/2;k++){
		if(a[k]!=m){
		J[j]=m;	}

		}
	}
printf("puntaje de juan: %d\n",puntojuan(int a[], int J[]));

return 0;}

