#include <stdio.h>
#include <stdlib.h>
int main (){
	int n,a,b,c,d,e,f;
	int g,h,i,j,k,l;

	printf ("ingrese precio de plato \n");
	scanf ("%d",&n);
	
	if (n>10) {
		if (n<50) {
			a=n/10;
			b=n%10;
			c=b/5;
			d=b%5;
			e=d/2;
			f=d%2;
		
			g=n/13;
			h=n%13;
			i=h/7;
			j=h%7;
			k=j/3;
			l=j%3;

			printf ("En monedas reales \n");			
			printf ("Son necesarias %d monedas de S/.10 \n",a);
			printf ("Son necesarias %d monedas de S/.5 \n",c);
			printf ("Son necesarias %d monedas de S/.2 \n",e);
			printf ("Son necesarias %d monedas de S/.1 \n",f);

			printf ("En monedas de Mistura \n");			
			printf ("Son necesarias %d monedas de S/.13 \n",g);
			printf ("Son necesarias %d monedas de S/.7 \n",i);
			printf ("Son necesarias %d monedas de S/.3 \n",k);
			printf ("Son necesarias %d monedas de S/.1 \n",l);
		}
		else {
			printf ("El precio del plato debe ser entre S/.10 y S/.50");
		}
	}
	else {
		printf ("El precio del plato debe ser entre S/.10 y S/.50");
	}			
	return 0;
}
