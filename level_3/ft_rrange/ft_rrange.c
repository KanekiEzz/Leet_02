#include <stdio.h>
#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int len;
    int i = 0;

    if (start > end)
        len = start - end;
    else if (end > start)
        len = end - start;

    int *ptr = malloc(len);
    if (start > end)
    {
        while (i <= len)
        {
            ptr[i] = start--;
            i++;
        }
    }
    else
    {
        while (i <= len)
        {
            ptr[i] = end--;
            i++;
        }
    }
    return ptr;
}
