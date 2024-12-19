#include <unistd.h>

int ft_strlen(char *str)
{
  int i = 0;
  while(str[i++]);
  return --i;
}

int main(int ac, char **av)
{
  int i, l;
  int ser;
  if (ac == 3)
  {
    i = 0;
    l = 0;
    while(av[1][i] != '\0')
    {
      while(av[2][l] != '\0')
      {
        if(av[1][i] == av[2][l])
        {
          ser++;
          break;
        }
        l++;
      }
      i++;
    }
    // check code
    int size_av1 = ft_strlen(av[1]);
    if(ser == size_av1)
    {
      int m = 0;
      while (av[1][m])
      {
        write(1, &av[1][m], 1);
        m++;
      }
    }
  }
  write(1, "\n", 1);
  return 0;
}