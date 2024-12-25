#include <stdio.h>
#include <stdlib.h>


int main (int ac, char **av)
{
	if (ac == 3)
	{
		int nmb1 = atoi(av[1]);
		int nmb2 = atoi(av[2]);
		if (nmb1 > 0 && nmb2 > 0)
		{
			while (nmb1 != nmb2)
			{
				if (nmb1 > nmb2)
					nmb1 -= nmb2;
				else
					nmb2-=nmb1;
			}
			printf("%d", nmb1);
		}
	}
	printf("\n");
}