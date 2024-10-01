#include <unistd.h>
#include <stdio.h>

int __strlen(char *str)
{
  int i = 0;
  while (str[i++]!='\0');
  return --i;
}

void __swap(char *a, char *b)
{
  char temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

char    *ft_strrev(char *str)
{
  int i = -1;
  int len = __strlen(str);
  char temp;
  while (++i < --len)
    __swap(&str[i], &str[len]);
  return str;
}

int main ()
{
  char str[] = "kaneki";
  printf("%s", ft_strrev(str));
}