#include <stdio.h>

int main(int argc, char *argv[])
{
    (void)argv;
    if (argc != 4 && argc != 5)
    {
        printf("Usage: ./philo <number of philo> ");
        printf("<time to die> <time to eat>");
        printf("<time to sleep> <optional: num of times each philo should eat>\n");
        return (0);
    }
    printf("Args are valid: Check the arguments passed");
    printf("if args are valid / Initialise struct..");
    return (0);
}
