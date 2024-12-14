#include <unistd.h>

int ft_atoi(char *str)
{
    int sign = 1;
    int result = 0;
    while((*str >= 9 && *str <= 13) || *str == ' ')
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
    return sign * result;
}

void print_hex(int num)
{
    int i = 0;
    char hex[] = "0123456789abcdef";
    if (num >= 16)
        print_hex(num / 16);
    write(1, &hex[num % 16], 1);
}


int main (int ac, char **av)
{
    if (ac == 2)
    {
        print_hex(ft_atoi(av[1] ));
    }
    write(1, "\n", 1);
}