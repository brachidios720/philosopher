#include "philo.h"


int	ft_create_philo(t_setting *set, int i)
{
	set->philo[i].id = i;
	set->philo[i].last_meal = find_ms();
	set->philo[i].set = set;
	set->philo[i].c_meal = set->t_howmuch;
	if(pthread_mutex_init())
}
int	ft_init_philo(int av, char **ac, t_setting *set)
{

}

int	ft_init_forks(t_setting *set)
{
	set->l_forks
}

// typedef struct philo_s
// {
//     int num_philo;
//     pthread_t thread;
//     long last_meal;
//     int c_meal;

// } t_philo;

// typedef struct setting_s
// {
//     int t_die;
//     int t_eat;
//     int t_think;
//     pthread_mutex_t *forks;
//     pthread_mutex_t status;
//     pthread_mutex_t meal_time;
//     int num_phil;
// } t_setting;
