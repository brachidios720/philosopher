
#include <pthread.h>
#include<stdlib.h>
#include <stdio.h>
#include<limits.h>
#include <sys/time.h>
#include "libft.h"

typedef struct philo_s
{
    int num_philo;
    pthread_t thread;
    long last_meal;
    int c_meal;

} t_philo;

typedef struct setting_s
{
    int t_die;
    int t_eat;
    int t_think;
    pthread_mutex_t *forks;
    pthread_mutex_t status;
    pthread_mutex_t meal_time;
    int num_phil;
} t_setting;
