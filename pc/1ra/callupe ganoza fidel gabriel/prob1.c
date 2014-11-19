#include <stdio.h>
#include <math.h>
int main() {
  int n=0;
	float s,p,l,f,m=0; 
	
  while (n<9999){
		s = pow(-1,n);
		p = ((2*n)+1);
	  f = pow((5.0/7.0),(2*n)+1);
		l = (s*f)/p;
    m = m + l;
		n++;
	}
		printf("el arctan(5/7) es: %.5g\n",m);
	  return 0;
}
