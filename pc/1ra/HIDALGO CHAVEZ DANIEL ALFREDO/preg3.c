#include <stdio.h>
void main(){
	int t,s,tr,u,p,a,b,c,d;
	printf("Ingrese el costo del plato (de S/.10 a S/.50)\n");
	scanf("%d",&p);
	t=p/13;
	s=(p-13*t)/7;
	tr=(p-t*13-s*7)/3;
	u=(p-t*13-s*7-tr*3);
	a=p/10;
	b=(p-10*a)/5;
	c=(p-10*a-b*5)/2;
	d=(p-10*a-b*5-c*2);
	printf("Se debe pagar en monedas de mistura: %d de 13, %d de 7, %d de 3 y %d de 1.\n",t,s,tr,u);
	printf("Se debe pagar en modedas reales: %d de 10, %d de 5, %d de 2, %d de 1\n",a,b,c,d);
}
