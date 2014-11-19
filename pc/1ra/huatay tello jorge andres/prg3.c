#include <stdio.h>
#include <stdlib.h>

int main(){

int i, j , k, n;

printf("precio:");
scanf("%d", &n);

i = n/13 +(n%13)/7 + ((n%13)%7)/3 + ((n%13)%7)%3;
printf("se usan %d monedas mistura", i);
j = n/10 +(n%10)/5 + ((n%10)%5)/2 + ((n%10)%5)%2;
printf("se usan %d monedas de nuevo sol", j);
if (i<j) 
return 0;
}
