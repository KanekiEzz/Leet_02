#include <unistd.h>

void _punbr(int nb)
{
	char *l = "0123456789";
	if (nb > 9)
		_punbr(nb / 10);
	write(1, &l[nb % 10], 1);
}

int main (int ac, char **av)
{
	(void)av;
	if ( ac > 1)
	{
		_punbr(ac - 1);
	}
	write(1, "\n", 1);
}