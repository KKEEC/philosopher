#ifndef PHILO_H
# define PHILO_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <threads.h>
#include <sys/time.h>


//struct for each fork, contains fork/mutex id and fork/mutex itself
typedef struct s_fork
{
    pthread_mutex_t fork;
    int fork_id; 
} t_fork;

//data struct for each philo 
// contains philo id,
// contains thread itself since
//times eaten to track how many times it has eaten
//lastmealtime to track time so that philo doewsnot die of starvation
// t_fork pointer to know what fork philo has taken
//bool full to check if philo has eaten at least n times defined in subject last argument
typedef struct s_philo
{
    int philo_id; 
    pthread_t   thread_id;
    t_fork  *left_fork;
    t_fork  *right_fork;
    int times_eaten;
    long    last_meal_time;
    bool full;
} t_philo;

typedef struct s_table
{
    long total_philo;
    long time_die;
    long time_eat;
    long time_sleep;
    long total_eat; //if there is last arguments otherwise we set it to -1
    long time_start; //time when simulation starts
    bool end_simulation; //when philo dies or all philos are full
    t_fork *forks;
    t_philo *philos;
} t_table;



void    ft_printusage();
long    ft_atol(char *str);
int ft_checkargs(int argc, char *argv[]);

#endif