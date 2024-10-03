#include <stdio.h>
#include <stdlib.h>

int __strlen(char *str)
{
  int i =0;
  while (str[i++]!='\0');
  return --i;
}

char    *ft_strdup(char *src)
{
  int len = __strlen(src);
  char *ptr;

  if (!(ptr = (char *)malloc(sizeof(char) * len)))
    return NULL;

  int i = -1;
  while (++i <= len)
    ptr[i] = src[i];
  ptr[i] = '\0';
  return ptr;
}

int main ()
{
  char src[] = "kankei";
  printf("%s", ft_strdup(src));
}