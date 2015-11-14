#include <stdio.h>
void main(){
	float f=1,x=5/7,sum;
	int n=1,c;
	do{
		f=f*(-1)/((2*n)-1);
		for(c=1;c<=((2*n)-1);c++)
			x=x*(5/7);
		sum=sum+(f*x);
		n++;
	   }while(n<=1);
	printf("%f\n",sum);
}
