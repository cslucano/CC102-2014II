#include<stdio.h>
#include<stdlib.h>
int generavector(int f[]){

int v[2];

printf("componente x de la fuerza %d: ",f);

scanf("%d",&v[0]);

printf("componente y de la fuerza %d: ",f);

scanf("%d",&v[1]);

printf("componente z de la fuerza %d: ",f);

scanf("%d",&v[2]);

return v[];
}

int mai(){

int n,f,s1,s1,s3;

printf("cuantas fuerzas actuan sobre el cuerpo:\n");
scanf("%d",&n);

for(f=0;f<n;f++){
generavector(f);
s1+=v[0];
s2+=v[1];
s3+=v[2];
}

if(s1==0 && s2==0 && s3==0){
printf("si\n");
}else{
	printf("no\n");}

return 0;}
