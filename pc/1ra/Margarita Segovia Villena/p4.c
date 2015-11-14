#include<stdio.h>

void main()
{
	float a,b,c,d,m,n,c1,c2,c3,k,resto;
	
	printf("\tHacer ruffini\n");
	printf("Ingrese los coeficientes de la ecuacion cubica: F(x)=ax3+bx2+cx+d\n");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	printf("Ingrese los coeficientes de la ecuacion lineal: G(x)=mx++n\n");
	scanf("%f%f",&m,&n);

	c1=a;
	k=((n/m)*(-1));
	c2=a*k+b;
	c3=c2*k+c;	
	resto=d+(c3*k);
	printf("H(x):cociente y R(x):resto\n");
	printf("H(x)=%gx(2)+%gx+%g\nR(x)=%g\n",c1,c2,c3,resto);	





}
