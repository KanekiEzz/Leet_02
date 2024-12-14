#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

int main(int ac, char **av)
{
    int i = 0;
    int start;
    int end = 0;
    if (ac == 2)
    {
        end = ft_strlen(av[1]) - 1;
        start = end;
        i = 0;
        while (end >= 0)
        {
            while (end >= 0 && (av[1][end] == ' ' || av[1][end] == '\t'))
                end--;
            if (end < 0)
                break;
            start = end;
            while (start >= 0 && av[1][start] != ' ' && av[1][start] != '\t')
                start--;
            write(1, &av[1][start + 1], end - start);
            if (end > 0)
                write(1, " ", 1);
            end = start - 1;
        }
    }
    write(1, "\n", 1);
}
