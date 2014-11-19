#include <stdio.h>
void main(){
	int a=1,b=1,c=-1,d=-1,e=1,q1,q2,q3,r,i1,i2,i3;
	printf(":::::Ruffini:::::\n");
	printf("F(x)=x³+x²-x-1\n");
	printf("G(x)=x+1\n");
	q1=a;
	i1=a*(-1)*e;
	q2=b+i1;
	i2=q2*(-1)*e;
	q3=c+i2;
	i3=q3*e*(-1);
	r=d+i3;
	printf("la factorizacion es %dx² + %dx +%d y el resto es %d\n",q1,q2,q3,r);
}

