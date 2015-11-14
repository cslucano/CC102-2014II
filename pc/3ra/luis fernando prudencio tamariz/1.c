#include<stdio.h>
#include<string.h>
void frecuencia(char cad[100],int frecu[58],int n){
    int i;
    char j;
    for(j=65;j<123;j++)
    {
        frecu[j]=0;
        for(i=0;i<n;i++)
        {
           if(cad[i]==j)
           frecu[j]++;
        }    
    }
}
void imprim(int frecu[58]){
    char i,j;
    for(i=65;i<123;i++)
    {
        if(frecu[i]!=0)
        {
            printf("%c%d",i,frecu[i]);
            for(j=0;j<frecu[i];j++){
        }
    }
 }
}
int main(){
    char cad[100];
    int frecu[26];
    int n;
    printf("escribre:");
    gets(cad);
    n=strlen(cad);
    frecuencia(cad,frecu,n);
    imprim(frecu);
    printf("\n");
    return 0;
} 
