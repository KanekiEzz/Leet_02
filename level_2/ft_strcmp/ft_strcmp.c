#include <unistd.h>


int    ft_strcmp(char *s1, char *s2)
{
  int i = 0;
  while (s2[i] && s2[i] && s2[i] == s1[i])
  {
    i++;
  }

  return s1[1] - s2[i];
}