#include <unistd.h>

void ft_p(int nb)
{
  char c[] = "0123456789";
  if (nb > 9)
    ft_p(nb / 10);
  write(1, &c[nb % 10], 1);
}

int main ()
{
  int i = 1;
  while (i <= 100)
  {
    if (i % 5 == 0 && i % 3 == 0)
      write(1, "fizzbuzz", 8);
    else if (i % 3 == 0)
      write(1, "fizz", 4);
    else if (i % 5 == 0)
      write(1, "buzz", 4);
    else
      ft_p(i);
    i++;
    write(1, "\n", 1);
  }
}