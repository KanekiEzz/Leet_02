#include <unistd.h>

int ft_atoi(char *str)
{
    int sign = 1;
    int result = 0;
    while ((*str >= 9 && *str <= 13) || *str == ' ')
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign *= -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        result = (result * 10) + (*str - '0');
        str++;
    }
    return result * sign;
}

int is_prime(int num)
{
    int i = 2;
    if (num <= 1)
        return 0;
    while (i * i <= num)
    {
        if (num % i == 0)
            return 0;
        i++;
    }
    return 1;
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void _putnbr(int num)
{
    if (num < 0)
    {
        ft_putchar('-');
        num *= -1;
    }
    if (num >= 10)
        _putnbr(num / 10);
    ft_putchar(num % 10 + '0');
}
#include <stdio.h>
int main(int ac, char **av)
{
    int i = 0;
    int sum = 0;
    int num = ft_atoi(av[1]);
    if (ac == 2)
    {
        while (num > 0)
        {
            if (is_prime(num))
                sum+=num;
            num--;
        }
        _putnbr(sum);
    }
    if (ac != 2)
        _putnbr(0);
    write(1, "\n", 1);
}