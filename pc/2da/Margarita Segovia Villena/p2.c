//problema 2
//Determina si un cuerpo esta en reposo o no

#include<stdio.h>
#define TAM 50

int suma_terminos (int n,int p[])
{
	int i,s=0;
	
	for(i=0;i<p[n];i++){
	s+=p[i];
	}

return s;
}


int vectores (int n,int a[],int b[],int c[])
{
	int x,y,z;

	x=suma_terminos(n,a);
	y=suma_terminos(n,b);
	z=suma_terminos(n,c);

	if(x==0&&y==0&&z==0){
	return 1;}
	
	else{
 	return 0;}


}


int main (void)
{
	int	n,i,r;
	int a[TAM+1],b[TAM+1],c[TAM+1];

	printf("Numero de fuerzas sobre el punto: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
	printf("Ingresar vector %d --> x y z : ",i+1);
	scanf("%d%d%d",&a[i],&b[i],&c[i]);
	}

	r=vectores(n,a,b,c);

	if(r==0)
	printf("NO\n");
	
	else
	printf("SI\n");


return 0;
}
















 
