#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2);


int main ()
{
  char s1[] = "diken";
  char s2[] = "ikenof";


  printf("%s", strpbrk(s1, s2));
}