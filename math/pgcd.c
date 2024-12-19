#include <stdio.h>
#include <stdlib.h>

int main (int ac, char **av)
{
  int n1;
  int n2;
  if ((n1 = atoi(av[1])) > 0 && ((n1 = atoi(av[1])) > 0))
  {
    while (n1 != n2)
    {
      if (n1 > n2)
        n1 -= n2;
      else
        n2 -= n1;
    }
    printf("%d", n1);
  }
  printf("\n");
}