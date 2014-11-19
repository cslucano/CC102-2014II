#include <stdio.h>
#include <stdlib.h>

int main(){

int j;
for(j=1 ; j<=7; j = j + 1){ 
switch (j) {
case 1: printf("*000000\n"); break;
case 2: printf("**00000\n"); break;
case 3: printf("***0000\n"); break;
case 4: printf("****000\n"); break;
case 5: printf("*****00\n"); break;
case 6: printf("******0\n"); break;
case 7: printf("*******\n"); break;
}
}
return 0;
}
