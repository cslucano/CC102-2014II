#include<stdio.h>

void main(){
	int i=0,j=0,k=6,n=7;	
	for(i=0;i<7;i++)
	{
		for(j=6;j>=0;j--)
		{
			if(n>k)
			printf("*");
			else
			printf("0");
		n--;
		}
	k--;
	n=7;
	printf("\n");
	}		
}
