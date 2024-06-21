#include "../include/philo.h"

void init_philo(t_philo *philo)
{
    philo->last_meal = find_ms();
    philo->id = 0;
}

int init_settings(t_setting *set, t_philo *philo)
{
    set->start_time = find_ms();
    set->forks = malloc(sizeof(pthread_mutex_t) * set->num_philo);
    set->philo = malloc(sizeof(t_philo) * set->num_philo);
    if(!set->forks || !set->philo)
        return(1);
    init_philo(philo);
    return(0);
}



// typedef struct philo_s
// {
// 	long last_meal; // dernier repas
// 	int id; // identifiant du philo
	
// } t_philo;

// typedef struct setting_s
// {
// 	int num_philo; // nombre de philo
// 	int t_die; // temps de mort
// 	int t_eat; // temps de repas
// 	int t_sleep; // temps de repos
// 	int how_much; // combien de repas
// 	int start_time; // lancement du programme
// 	pthread_t num; // les threads 
// 	pthread_mutex_t *forks; // fourchettes
//     t_philo *philo; // acces paramettre des philos
	
// } t_setting;
