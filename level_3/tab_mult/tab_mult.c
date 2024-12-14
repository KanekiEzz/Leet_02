#include <unistd.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int sign = 1;
    int resu = 0;
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
        resu = (resu * 10 ) + (*str - 48);
        str++;
    }
    return resu * sign;
}

int putnbr(int n)
{
    char digit[] = "0123456789";
    if (n > 9)
        putnbr(n / 10);
    write(1, &digit[n % 10], 1);
}
int main(int ac, char **av)
{
    int num = ft_atoi(av[1]);
    int res = 1;
    int i = 1;
    if (ac == 2)
    {
        while (i <= 9)
        {
            putnbr(i);
            write(1, " ", 1);
            write(1, "*", 1);
            write(1, " ", 1);
            putnbr(num);
            write(1, " ", 1);
            write(1, "=", 1);
            write(1, " ", 1);
            res = i * num;
            putnbr(res);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
}