#include<stdio.h>

void main(){
	int a,b,c,d,x,y,z,m=0,n=0,p=0,q=0;
	printf("Sea F(x)= x^3+x^2-x-1\n");
	printf("Y G(x)= x+1\n");
	a=1;b=1;c=-1;d=-1;x=1;y=1;
	m=a/x;
	n=b + (m*(-y));
	p=c + (n*(-y));	
	q=d + (p*(-y));

	printf("Entonces por Ruffini: %dx^2+%dx+%d\n",m,n,p);
}
	
