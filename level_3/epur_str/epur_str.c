#include <unistd.h>

int _chek(char c)
{
    if (c == ' ' || c == '\t')
        return 0;
    return 1;
}

int main(int ac, char **av)
{
    int i;
    if (ac == 2)
    {
        i = 0;
        while (_chek(av[1][i]) == 0 && av[1][i])
            i++;
        while (av[1][i])
        {
            while (av[1][i] && !(_chek(av[1][i]) == 0))
            {
                write(1, &av[1][i], 1);
                i++;
            }
            while (_chek(av[1][i]) == 0)
                i++;
            if (av[1][i] == '\0')
                break;
            write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
}