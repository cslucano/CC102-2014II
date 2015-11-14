#include <stdio.h>


int main(){

int num, i, j,m;

printf("ingrese numero de fuerzas\n");
scanf("%d",&num);
float a[3], b[3]={0,0,0};

for(i=0; i<num; i++){
printf("ingrese fuerza %d\n", i+1);
     for(j=0; j<3; j++){
     scanf("%f",&a[j]);
     b[j]=a[j]+b[j];
     }
}

for(j=0; j<3;j++){
if(b[j]==0){
m=m+1;
}
}

if(m==3){
printf("si\n");
}
else printf("no\n");

return 0;

}
