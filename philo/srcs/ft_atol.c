#include "../includes/philo.h"

long	ft_atol(char *str)
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