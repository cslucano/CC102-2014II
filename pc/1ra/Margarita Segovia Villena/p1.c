//arctag
#include<stdio.h>

void main()
{

	int i,k,n=100;
	float x=0.7143,s=0.7143;	// (5/7)=0.7143
	
	
	for(i=3;i<=n;i+=2){

	x*=(0.5102);	// (25/49)=0.5102
	x/=i;
	x*=(-1);
	s+=x;

	}

	printf("s=%g\n",s);





}
