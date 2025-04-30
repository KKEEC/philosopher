#include "../includes/philo.h"

long    ft_atol(char *str)
{
    long result;
    int i;

    if (!str)
        return (0);
    result = 0;
    i = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return (result);
}