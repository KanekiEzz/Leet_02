#include <unistd.h>

int ft_isblank(char c)
{
    return (c == ' ' || c == '\t');
}

int main(int ac, char **av)
{
    int i = 0;
    int first_word_length = 0;
    if (ac > 1 && *av[1])
    {
        while (av[1][i])
        {
            while (ft_isblank(av[1][i]))
                i++;
            if (av[1][i] && !ft_isblank(av[1][i]))
            {
                if (first_word_length == 0)
                {
                    while (av[1][i] && !ft_isblank(av[1][i++]))
                        first_word_length++;
                }
                else
                {
                    while (av[1][i] && !ft_isblank(av[1][i]))
                    {
                        write(1, &av[1][i], 1);
                        i++;
                    }
                    if (!(av[1][i-1] == '\0'))
                        write(1, " ", 1);
                }
            }
        }
        i = 0;
        while (ft_isblank(av[1][i]))
            i++;
        while(first_word_length--)
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}