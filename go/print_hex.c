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

void _print(int num)
{
	char *l = "0123456789abcdef";
	if (num >= 16)
		_print(num / 16);
	write(1, &l[num % 16], 1);
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		char *str =av[1];
		int num =ft_atoi(av[1]);
		_print(num);
	}
}