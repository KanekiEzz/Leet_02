#include <unistd.h>

int main (int ac, char **av)
{
	int i = 0;
	int fist_word = 1;
	if (ac == 2)
	{
		char *str = av[1];
		while (str[i])
		{
			while (str[i] && (str[i] == ' ' || str[i] == '\t'))
				i++;
			if (str[i])
			{
				if (!fist_word)
					write(1, " ", 1);
				fist_word = 0;
				while (str[i] && str[i] != ' ' && str[i] != '\t')
					write(1, &str[i++], 1);
			}
		}
	}
	write(1, "\n", 1);
}
