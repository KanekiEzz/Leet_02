#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
    int i = 0;
    int len;
    if (start > end)
        len = start - end;
    else
        len = end - start;
    int *ptr = malloc(len * sizeof(int));
    if (ptr == NULL)
        return NULL;
    if (start > end)
    {
        while (i <= len)
        {
            ptr[i] = start--;
            i++;
        }
    }
    else if (end > start)
    {
        while (i <= len)
        {
            ptr[i] = start++;
            i++;
        }
    }
    return ptr;
}

int main()
{
    int start = -2;
    int end = 9;
    int i = 0;

    int *ptr = ft_range(start, end);
    while (i <= end - start)
    {
        printf("%d ", ptr[i]);
        i++;
    }
    free(ptr);
}