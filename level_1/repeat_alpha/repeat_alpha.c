#include <unistd.h>

int main (int ac, char **av)
{
  if (ac == 2)
  {
    int i = 0;
    int flags;
    while (av[1][i])
    {
      flags = 0;
      if (av[1][i] >= 'a' && av[1][i] <= 'z')
        flags = av[1][i] - 'a';
      else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
        flags = av[1][i] - 'A';
      while (flags >= 0)
      {
        write(1, &av[1][i], 1);
        flags--;
      }
      i++;
    }
  }
  write(1, "\n", 1);
}