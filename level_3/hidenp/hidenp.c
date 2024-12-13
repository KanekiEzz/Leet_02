#include <unistd.h>
#include <stdio.h>
int main (int ac ,char **av)
{
    int flags = 0;
    int i = 0;
    int j = 0;
    if (ac == 3)
    {
        while(av[1][i])
        {
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    flags++;
                    break;
                }    
                j++;
            }
            i++;
        }
        if (flags == i)
        {
            write(1, "1", 1);
        }
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
}