#include<stdio.h>
int main(){
int p,entero,rest;
    printf("ingrese el precio del plato:");
    scanf("%d",&p);
    printf("EL PRECIO EN DINERO REAL ES:\n");
    entero=p/10;
    rest=p%10;
    printf("se necesitan %d billetes de diez soles\n",entero);
    entero=rest/5;
    rest=rest%5;
    printf("se necesitan %d monedas de cinco soles\n",entero);
    entero=rest/2;
    rest=rest%2;
    printf("se necesitan %d monedas de dos soles\n",entero);
    printf("se necesitan %d monedas de 1 sol\n",rest);
    
    printf("EL PRECIO EN DINERO FICTICIO ES:\n");
    entero=p/13;
    rest=p%13;
    printf("se necesitan %d billetes de trece soles\n",entero);
    entero=rest/7;
    rest=rest%7;
    printf("se necesitan %d billetes de siete soles\n",entero);
    entero=rest/3;
    rest=rest%3;
    printf("se necesitan %d billetes de tres soles\n",entero);
    printf("se necesitan %d billetes de 1 sol\n",rest);
    return 0;


}
