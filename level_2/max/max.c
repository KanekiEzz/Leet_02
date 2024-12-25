#include <stdio.h>

int		max(int* tab, unsigned int len)
{
  unsigned int i = 0;
  if (len == 0)
    return i;
  int result;
  result = tab[i];
  while (i < len)
  {
    if (result < tab[i])
      result = tab[i];
    i++;
  }
  return result;
}
