

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char **ret;

	if (!(ret = (char **)malloc(sizeof(char *) * (2048))))
		return(NULL);
	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;	
	while(str[i])
	{
		j = 0;
		if(!(ret[k] = (char *)malloc(sizeof(char)*(4096))))
			return(NULL);
		while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			ret[k][j++] = str[i++];
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		ret[k][j] = '\0';
		k++;
	}
	ret[k] = NULL;
	return(ret);
}

// int	main(int ac, char **av)
// {
// 	int i;
// 	char	**str;

// 	i = 0;
// 	if(ac == 2)
// 	{
// 		if (av[1])
// 		{
// 			str = ft_split(av[1]);
// 			while (str[i] != NULL)
// 				printf("%s\n", str[i++]);
// 		}
// 	}
// 	else
// 		printf("\n");
// 	return (0);
// }
