#include <unistd.h>

int main(int ac, char **av)
{
  int i;
  char c;
  if (ac == 2)
  {
    i = 0;
    while (av[1][i] != '\0')
    {
      if (av[1][i] >= 'a' && av[1][i] <= 'z')
        c = ('z'+ 'a') - av[1][i];
      else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
        c = ('Z' + 'A') - av[1][i];
      write(1, &c, 1);
      i++;
    }
  }
  write(1, "\n", 1);
}
