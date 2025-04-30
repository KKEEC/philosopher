#include "../includes/philo.h"

int main(int argc, char *argv[])
{
	(void)argv;
	if (argc != 5 && argc != 6)
	{
		printf("Usage: ./philo <number of philo> ");
		printf("<ms time to die> <ms time to eat>");
		printf("<ms time to sleep>");
		printf("<optional: num of times each philo should eat>\n");
		return (1);
	}
	if (ft_checkargs(argc, argv))
    {
        printf("Error: Invalid arguments\n");
        return (1);
    }
	return (0);
}
