#include <unistd.h>

int _check(char c)
{
    if (c == ' ' || c == '\t')
        return 0;
    return 1;
}

int main(int ac, char **av)
{
    int i;
    int flag;
    if (ac == 2)
    {
        while (_check(av[1][i]) == 0)
            i++;
        while (av[1][i])
        {
            if (_check(av[1][i]) == 0)
                flag = 1;
            if (!(_check(av[1][i]) == 0))
            {
                if (flag == 1)
                    write(1, " ", 1);
                flag = 0;
                write(1, &av[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
}