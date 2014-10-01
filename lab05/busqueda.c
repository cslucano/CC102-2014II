#include <stdio.h>
#include <stdlib.h>


int buscar(int A[], int desde, int hasta, int elemento)
{

  int puntomedio = (desde + hasta) /2;
  if (A[puntomedio] == elemento)
  {
    return puntomedio;
  }
  else if(A[puntomedio]>elemento)
  {
    return buscar(A, desde, puntomedio, elemento);
  }
  else
  {
    return buscar(A, puntomedio+1, hasta, elemento);
  }
}

int main()
{
  int notas[5] = { 1, 4, 6, 7, 9 };

  printf("encontrado en el indice: %d\n", buscar(notas, 0, 4, 9));

  return 0;
}
