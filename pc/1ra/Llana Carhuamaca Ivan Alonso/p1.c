#include<stdio.h>

void main(){
	float n=0,x=(5/7),s=1,r=0,arc=0,i=0,j=0;
	
	do
	{
		for(j=0;j<(2*i)+1;j++)
		{
			s= s*x;
		}
	r = s/((2*i)+1);
	n=r;
		for(j=0;j<i;j++)
		{
			r=-r;
		}
	arc= arc + r;
	i++;
	s=1;
	}
	while(i<100);	
	printf("El valor aproximado del arctanx es: %f",arc);
}
