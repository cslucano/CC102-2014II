#include<stdio.h>
#include<stdlib.h>
int main() {

	int n,a,b,c,d,x,y,z,w;
	
	printf("Costo del plato: ");

	scanf("%d",&n);

	a=n/13;
	b=(n%13)/7;
	c=((n%13)%7)/3;
	d=(((n%13)%7)%3);
	
	x=n/10;
	y=(n%10)/5;
	z=((n%10)%5)/2;
	w=(((n%10)%5)%2);
	
	printf("Monedas mistura: %d de 13, %d de 7, %d de 3 y %d de 1\n",a,b,c,d);
	
	printf("Monedas reales: %d de 10, %d de 5, %d de 2 y %d de 1\n",x,y,z,w);
	
	return 0;
	
}	
