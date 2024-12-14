#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    if (n < 0)
    {
        ft_putchar('-');
        n *= -1;
    }
    if (n > 9)
        ft_putnbr(n / 10);
    ft_putchar(n % 10 + 48);
}

int main (int ac, char **av)
{
    if (ac >= 2)
    {
        ft_putnbr(ac - 1);
    }
    else
        ft_putnbr(0);
    write(1, "\n", 1);
}