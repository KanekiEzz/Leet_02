#include <unistd.h>

int t_atoi(char *str)
{
	int sign = 1;
	int resu = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		resu = resu *10 + (*str - 48);
		str++;
	}
	return resu * sign;
}

void putchar(char c)
{
	write(1, &c, 1);
}

void _putnbr(int nb)
{
	if (nb > 9)
		_putnbr(nb / 10);
	putchar(nb % 10 + 48);
}
int main (int ac, char **av)
{
	if (ac == 2)
	{
		int i = 1;
		int sum = t_atoi(av[1]);
		while (i <= 9)
		{
			int resu = sum * i;
			_putnbr(i);
			write(1, " ", 1);
			write(1, "*", 1);
			write(1, " ", 1);
			_putnbr(sum);
			write(1, " ", 1);
			write(1, "=", 1);
			write(1, " ", 1);
			_putnbr(resu);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}