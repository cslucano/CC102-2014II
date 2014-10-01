#include <stdio.h>
#include <stdlib.h>

int factorial(n)
{
  if (n == 1)
  {
    return 1;
  }
  else
  {
    return n * factorial(n-1);
  }
}

int main()
{
  int n = 5;

  printf("factorial(%d)= %d\n", n, factorial(n));

  return 0;
}
