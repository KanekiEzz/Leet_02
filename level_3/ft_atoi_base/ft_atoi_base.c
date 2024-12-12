#include <stdio.h>

int ft_atoi_base(const char *str, int str_base)
{
    int sign = 1;
    int result = 0;
    int sum;
    if (str_base < 2 || str_base > 16)
        return 0;

    while ((*str >= 9 && *str <= 13) || *str == ' ')
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while ((*str >= '0' && *str <= '9') || (*str >= 'a' && *str <= 'f') || (*str >= 'A' && *str <= 'F'))
    {
        if (*str >= '0' && *str <= '9')
            sum = *str - '0';
        else if (*str >= 'a' && *str <= 'f')
            sum = (*str - 'a') + 10;
        else if (*str >= 'A' && *str <= 'F')
            sum = (*str - 'A') + 10;
        else
            break;
        if (sum >= str_base)
            break;
        result = result * str_base + sum;
        str++;
    }
    return (result * sign);
}

int main()
{
    const char *test1 = "   -1a";
    const char *test2 = "2F";
    const char *test3 = "   +1011";
    const char *test4 = "z";

    printf("Test 1 (Base 16): %d\n", ft_atoi_base(test1, 16));
    printf("Test 2 (Base 16): %d\n", ft_atoi_base(test2, 16));
    printf("Test 3 (Base 2): %d\n", ft_atoi_base(test3, 2));
    printf("Test 4 (Base 36): %d\n", ft_atoi_base(test4, 36));

    return 0;
}
