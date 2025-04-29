#include "../includes/philo.h"

/* static int  ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
} */

long    ft_atol(char *str)
{
    (void)str;
    int result;
    int i;

    result = 0;
    i = 0;
    if (str[i] == '+')
        i++;
    if (str[i] == '-')
        return (-1);
    return (i);
}