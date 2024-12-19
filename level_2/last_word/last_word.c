#include <unistd.h>

int ft(char *str)
{
  int i=0;
  while(str[i])
    i++;
  return i;
}

int main(int ac, char **av)
{
  if (ac == 2)
  {
    int len = ft(av[1]) - 1;
    int i = len;
    while (av[1][i] == ' ' || av[1][i] == '\t')
      i--;
    while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
      i--;
    i++;
    while (i <= len && av[1][i])
    {
      if (av[1][i] == ' ' || av[1][i] == '\t')
        break ;
      write(1, &av[1][i], 1);
      i++;
    }
  }
  write(1, "\n", 1);
}