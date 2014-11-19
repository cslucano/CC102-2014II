#include<stdio.h>
#include<math.h>
int main (){
int i=1,pot;
float arctan=0,x=5/7,b;

do {
pot=pow(x,2*i+1);
b=2*i+1;
i++;
arctan=arctan+(pow(-1,2*i+1)*pot)/b;}
while(arctan<pow(10,-6));
printf("el arctan:%f",arctan);
return 0;
}
