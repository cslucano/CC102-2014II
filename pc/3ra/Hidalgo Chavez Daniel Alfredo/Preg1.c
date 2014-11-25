#include <stdio.h>
void main(){
	char a[40],b[40],c[40];
	int i,j,f=1,aux,con=0;
	printf("Escribir cadena\n");
	gets(a);
	for(i=0;i<40;i++)
		for(j=0;j<40;j++)
			if(a[i]==a[j]){
				b[i]=a[i];
				a[j]=' ';}
	for(i=0;i<40;i++){
		for(j=con;b[j]!='\0'&&aux==0;j++){
			con++;
			f++;
			if(b[i]!='\0'&&b[i]!=' '){
				c[i]=b[i];
				aux++;
				printf("%c%d",c[i],f);
				f=0;}}}
}
