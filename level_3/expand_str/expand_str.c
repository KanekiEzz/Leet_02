#include <unistd.h>

int main (int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		int flags = 1;
		char *str = av[1];
		while (str[i])
		{
			while (str[i] && (str[i] == ' ' || str[i] == '\t'))
				i++;
			if (str[i])
			{
				if (!flags)
					write(1, "   ", 3);
				flags = 0;
				while (str[i] && str[i] != ' ' && str[i] != '\t')
					write(1, &str[i++], 1);
			}
		}
	}
	write(1, "\n", 1);
}
