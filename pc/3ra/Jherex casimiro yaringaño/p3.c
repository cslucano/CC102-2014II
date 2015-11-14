#include<stdio.h>
#include<string.h>
void funcion(char cad[100],char cad2[100],int n)
{
     int i,j,k=0;
     for(i=0;i<n;i++)
         {
            if(cad[i]==cad[+1])
            {
            cad2[k]=' ';
            k++;
            }
            else
            {
             cad2[k]=cad[i];
             k++;
            }
         
         }
    }
    cad2[k]='\0';
for(i=0;i<k;i++){
  if(cad2[i]!=' ')
  printf("%c",cad2[i]);
 }
 
}
int main()
{
	char cad[100],cad2[100];
	int n;
	printf("escribre:");
	gets(cad);
	n=strlen(cad);
	funcion(cad,cad2,n);
	return 0;
}
