#include <stdio.h>
#include <stdlib.h>

int main() {
  int nota;

  nota = 11;

  if (nota < 1) {
    printf("nota no valida\n");
  }
  else if (nota < 5) {
    printf("pésimo\n");
  }
  else if (nota < 10) {
    printf("malo\n");
  }
  else if (nota < 14) {
    printf("bueno\n");
  }
  else if (nota < 21) {
    printf("excelente\n");
  }  
  else {
    printf("nota no valida\n");
  }

  if(nota >= 1 && nota <= 20)
  {
		if (nota >=1 && nota < 5) {
		  printf("pésimo\n");
		}

		if (nota >=5 && nota < 10) {
		  printf("malo\n");
		}

		if (nota >=10 && nota < 14) {
		  printf("bueno\n");
		}

		if (nota >=14 && nota < 21) {
		  printf("excelente\n");
		}  
  }
  else {
    printf("nota no valida\n");
  }

  switch(nota) {
		case 1:
		case 2:
		case 3:
		case 4:
				printf("pésimo\n");	
				break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
				printf("malo\n");
				break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
				printf("bueno\n");
				break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
				printf("excelente\n");
				break;
    default:
        printf("no valido\n");
  }

  switch((nota-1)/5) {
		case 0:
				printf("pésimo\n");	
				break;
		case 1:
				printf("malo\n");	
				break;
		case 2:
				printf("bueno\n");	
				break;
		case 3:
				printf("excelente\n");	
				break;
  }
  
  return 0;
}
