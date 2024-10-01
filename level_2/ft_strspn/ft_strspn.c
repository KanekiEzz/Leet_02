#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
  size_t i = 0;
  size_t j = 0;
  size_t flags = 0;
  while (s[i] != '\0')
  {
    flags = 0;
    j = 0;
    while (accept[j] != '\0')
    {
      if (s[i] == accept[j])
      {
        flags = 1;
        break;
      }
      j++;
    }
    if (flags != 1)
      break;
    i++;
  }
  return i;
}


int main ()
{
  int i;
  int j;
  char strtext[] = "1292t3d82h";
  char cset[] = "1234567890";

  i = strspn (strtext,cset);
  j = ft_strspn (strtext,cset);
  printf ("The initial number has %d digits.\n",i);
  printf ("The initial number has %d digits.\n",j);
  return 0;
}