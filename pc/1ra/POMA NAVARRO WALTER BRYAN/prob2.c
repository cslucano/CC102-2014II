#include <stdio.h>
void main(){
	int n,q1,q2,q3,q4,r1,r2,r3,k1,k2,k3,w1,w2,w3;
	printf("ingrese precio:\n ");
	scanf("%d",&n);
	q1=n/13;
	r1=n%13;
	q2=r1/7;
	r2=r1%7;
	q3=r2/3;
	r3=r2%3;
	k1=n/10;
	w1=n%10;
	k2=w1/5;
	w2=w1%5;
	k3=w2/2;
	w3=w2%2;
	printf("%d mondedas de 13, %d monedas de 7, %d monedas de 3, %d monedas de 1\n ",q1,q2,q3,r3);	
	printf("%d mondedas de 10, %d monedas de 5, %d monedas de 2, %d monedas de 1\n ",k1,k2,k3,w3);	
	}
