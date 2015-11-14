#include <stdio.h>
void rep(char a[]);
void main(){
	char cad[40+1];
	printf("Escriba el texto:\n");
	gets(cad);
	rep(cad);
}
void rep(char a[]){
	int i,j;
	char b[40+1];
	for(i=0;a[i]!='\0';i++)
		if(a[i]!=a[i+1])
			b[i]=a[i];
	for(j=0;b[j]!='\0'&&b[j]!=b[j+1];j++);
	if(b[j]==b[j+1])
		rep(b);
	if(b[j+1]=='\0')
		puts(b);
}
