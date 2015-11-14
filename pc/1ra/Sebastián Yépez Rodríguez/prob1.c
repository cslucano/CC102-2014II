#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	
	#define arctan 35.53767779
	
	#define error 0.0001
	
	int i,j;
	float s,a,b,p,x;
	
	x=5.0/7.0;

	for(j=1,s=0.0 ; ((s-arctan) >= error) || ((s-arctan) <= error*-1) ; i++) {
		for(j=1, b=-1.0 ,p=-1.0 ; j<=i ; j++){
			b += 2;
			p *= pow(x,2)*(-1);
			a = p/b;
		}
	   s+=a;
	}  
	
	printf("Arco tangente de 5/7= %.6f\n",s);
	
	return 0;

}	 		
			
