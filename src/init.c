#include "../include/philo.h"

void init_philo(t_philo *philo)
{
    philo->last_meal = find_ms();
    philo->c_meal = 0;
}

void init_settings(t_setting *set)
{
    int i = 0;
    while(i > set->num_philo)
    {
        set->num = pthread_create()
    }
}


// typedef struct philo_s
// {
// 	long last_meal; // dernier repas
// 	int c_meal; //combien de repas
// 	int id; // identifiant du philo
// 	pthread_mutex_t mutex; // mutex
	
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
// 	pthread_mutex_t *r_f; // fourchette gauche
// 	pthread_mutex_t *l_f; // fourchette droite
//     t_philo *philo; // acces paramettre des philos
	
// } t_setting;
