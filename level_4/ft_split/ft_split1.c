

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char **ptr;
	if (!(ptr = malloc(sizeof(char *) * (2048))))
		return NULL;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i])
	{
		j = 0;
		if (!(ptr[k] = malloc(4096)))
			return NULL;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			ptr[k][j++] = str[i++];
		while (str[i] && str[i] == ' ' && str[i] == '\t' && str[i] == '\n')
			i++;
		ptr[k][j] = '\0';
		k++;
	}
	ptr[k] = NULL;
	return(ptr);
}

int	main(int ac, char **av)
{
	int i;
	char	**str;

	i = 0;
	if(ac == 2)
	{
		if (av[1])
		{
			str = ft_split(av[1]);
			while (str[i] != NULL)
				printf("%s\n", str[i++]);
		}
	}
	else
		printf("\n");
	return (0);
}
