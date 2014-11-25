#include<stdio.h>
int main(){
char frase[60];
int i,t,j;
	printf("introdusca la frase: \n");
	scanf("%s",frase);
	for(i=0;frase[i]!=0;i++)
	{t++;
	//printf("t\n");
	}
	for(j=0;j<=t;j++){
	printf("%c",frase[t-j]);
	}
printf("\n");

	return 0;
	}
