#include <stdio.h>
#include <string.h>
void main(){
	char v1[30+1];
	int i,j=0,k,c=0;
	printf("Ingrese el texto\n");
	gets(v1);
	for(i=0;i<31;i++)
		if(v1[i]!='\0')
			j++;
	char v2[j],v3[j];
	strcpy(v2,v1);
	do{
		j--;
		c++;
			if(v2[j]==' '){
				j++;
				for(k=0;k<c;k++)
					v3[k]=v2[k+j];
				c=0;
				j--;}
	   }while(j>=0);
	puts(v3);
}
