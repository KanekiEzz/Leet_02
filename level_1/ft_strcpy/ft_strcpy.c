#include <unistd.h>
#include <stdio.h>
char    *ft_strcpy(char *s1, char *s2)
{
  int i;

  i= -1;
  while (s2[++i])
    s1[i]=s2[i];
  s1[i] = '\0';
  return s1;
}

int main ()
{
  char s1[] = "kankei";
  char s2[] = "kenf";

  char *k= ft_strcpy(s1, s2);

  printf("%s", k);

}