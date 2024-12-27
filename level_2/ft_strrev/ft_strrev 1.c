#include <unistd.h>

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while(str[i] != '\0')
  {
    i++;
  }
  return i;
}

char  *ft_strrev(char *str)
{
  int len = ft_strlen(str);
  int start = 0;
  int end = len - 1;

  while(start < end)
  {
    int swap;
    swap = str[start];
    str[start] = str[end];
    str[end] = swap;

    start++;
    end--;
  }
  return str;
}

int main()
{
  char  str[] = "kaneki";

  char *c = ft_strrev(str);
  
  write(1, c, ft_strlen(c));

}