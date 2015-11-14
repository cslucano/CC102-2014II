#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

	int costo; 
	int a,b,c,d,e,f,g,h;

	a=costo/13;
	b=(costo%13)/7;
	c=((costo%13)%7)/3;	
	d=(((costo%13)%7)%3)/1;	

	e=costo/10;
	f=(costo%10)/5;
	g=((costo%10)%5)/2;	
	h=(((costo%10)%5)%2)/1;	

	printf("Ingrese costo entero entre 10 y 50 Nuevos soles: \n");
	scanf("%d",&costo);

	printf("El costo expresado en Monedas de Mistura es:\n");
	printf("%d Monedas de 13, %d Monedas de 7, %d Monedas de 3, %d Monedas de 1\n", a, b, c, d); 
			
	printf("El costo expresado en Monedas Reales es:\n");
	printf("%d Monedas de 10, %d Monedas de 5, %d Monedas de 2, %d Monedas de 1\n", e, f, g, h); 

return 0;
}
