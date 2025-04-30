#include <stdio.h>
#include "../includes/philo.h"

int main(int argc, char *argv[])
{
    (void)argv;
    if (argc != 5 && argc != 6)
    {
        ft_printusage();
        return (0);
    }
    if (!ft_checkargs(argc, argv))
    {
        ft_printusage();
        printf("Only positive numbers without sign are accepted\n");
        return (0);
    }
    printf("Args are valid / Initialise struct..");
    return (0);
}
