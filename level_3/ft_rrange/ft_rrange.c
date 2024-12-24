#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int len;
	if (start > end)
		len = start - end;
	else
		len = end - start;
	int *ptr = malloc(len * sizeof(int));
	if (!ptr)
		return NULL;
	int i = 0;
	if (start > end)
	{
		while (i <= len)
		{
			ptr[i] = end++;
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
