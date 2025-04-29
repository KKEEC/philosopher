#include <stdio.h>
#include "../includes/philo.h"

int main(int argc, char *argv[])
{
    (void)argv;
    if (argc != 5 && argc != 6)
    {
        printf("Usage: ./philo <number of philo> ");
        printf("<ms time to die> <ms time to eat>");
        printf("<ms time to sleep> <optional: num of times each philo should eat>\n");
        return (0);
    }
    int x = ft_checkargs(argc, argv);
    printf("Args are valid: Check the arguments passed  %d ", x);
    printf("if args are valid / Initialise struct..");
    return (0);
}
