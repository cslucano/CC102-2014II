#include<stdio.h>
int main(){
char frase[60];
int i,t,j;
	printf("introdusca la frase: \n");
	scanf("%s",frase);
	for(i='a';i<='z';i++){
    t=0;	
	for(j=0;frase[j]!='\0';j++){
	
	if(frase[j]=='a'){
	t++;
	}
    if(t!=0){
    printf("%c,%d\n",i,t);
    }
	
	}
	}

return 0;
}
