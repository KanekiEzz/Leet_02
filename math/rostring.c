#include <unistd.h>

int main(int ac, char **av)
{
  int i = 0;
  int flags = 0;
  int start = 0;
  int end = 0;
  if (ac > 1)
  {
    while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
      i++;
    start = i;
    while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
      i++;
    end = i;
    while (av[1][i])
    {
      while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
        i++;
      if (av[1][i])
      {
        if (flags == 0)
          write(1, " ", 1);
        flags = 0;
        while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
          write(1, &av[1][i++], 1);
      }
    }
    if (flags == 0)
      write(1, " ", 1);
    while (start < end)
      write(1, &av[1][start++], 1);
  }
  write(1, "\n", 1);
}