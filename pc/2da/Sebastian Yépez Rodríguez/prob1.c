#include<stdio.h>
#define TAM 50

int Mayor(int j[], int a[], int N);

int main() {
	int j[4]={4,3,5,6}, a[4]={2,7,1,8},c;

	c=Mayor(j,a,4);	

	printf("Puntos de Juan= %d\n",c);

	return 0;
}

int Mayor(int j[], int a[], int N){
	int i=0,c=0;

	for(;i<N;i++)
		if(j[i]>a[i])
			c++;
	
	return c;
}
