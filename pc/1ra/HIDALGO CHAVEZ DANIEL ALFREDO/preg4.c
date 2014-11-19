#include <stdio.h>
void main(){
	int r1,r2,r3,r4;
	printf("F(x)=x*x*x+x*x-x-1\nG(x)=x+1\n");
	int c1=1,c2=1,c3=-1,c4=-1;
	r1=c1;
	r2=(r1*(-1))+c2;
	r3=(r2*(-1))+c3;
	r4=(r3*(-1))+c4;
	printf("La factorizacion sera: ((%d)x*x+(%d)x+(%d))*(x+1)+%dx\n",r1,r2,r3,r4);
}
