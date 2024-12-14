#include <stdio.h>
#include <stdlib.h>

int lenint (int nbr)
{
    int num = 0;
    if (nbr < 0)
    {
        nbr *= -1;
        num++;
    }
    while (nbr > 0)
    {
        nbr /= 10;
        num++;
    }
    return num;
}

char	*ft_itoa(int nbr)
{
    int len = lenint(nbr);
    char *ptr = malloc(len + 1);
    if (nbr == -2147483648)
        return("-2147483648\0");
    ptr[len] = '\0';
    if (nbr == 0)
    {
        ptr[0] = '0';
        return ptr;
    }
    if (nbr < 0)
    {
        ptr[0] = '-';
        nbr *= -1;
    }
    while (nbr > 0)
    {
        ptr[--len] = nbr % 10 + 48;
        nbr /= 10;
    }
    return ptr;
}
