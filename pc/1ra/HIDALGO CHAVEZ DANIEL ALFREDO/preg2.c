#include <stdio.h>
void main(){
	int i,j;
	for(i=1;i<=7;i++){
	for(j=1;j<=7;j++){
	if(i==1||i==7){
	if(j==4)
		printf("*");
	else
		printf("o");
	if(j==7)
		printf("\n");}
	if(i==2||i==6){
		if(j==3||j==4||j==5)
		printf("*");
	else
		printf("o");
	if(j=7)
		printf("\n");}
	if(i==3||i==5){
		if(j==2||j==3||j==4||j==5||j==6)
		printf("*");
	else
		printf("o");
	if(j==7)
		printf("\n");}
	if(i==4){
		if(j<=7)
		printf("*");
		if(j=7)
		printf("\n");}}}
}
