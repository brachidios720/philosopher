/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:26:06 by rcarbonn          #+#    #+#             */
/*   Updated: 2024/01/25 06:18:51 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <sys/time.h>
#include <stddef.h>
#include <unistd.h>
//#include "./libft/libft.h"


typedef struct philo_s
{
    int place; //place autour de la table
	long last_meal; // dernier repas
	int c_meal; //combien de repas
	pthread_t id; // identifiant du philo
	pthread_mutex_t mutex; // mutex
	
} t_philo;

typedef struct setting_s
{
	int num_philo; // numero du philo
	int t_die; // temps de mort
	int t_eat; // temps de repas
	int t_sleep; // temps de repos
	int how_much; // combien de repas
	int start_time; // lancement du programme
	pthread_mutex_t *r_f; // fourchette gauche
	pthread_mutex_t *l_f; // fourchette droite
    t_philo *philo; // acces paramettre des philos
	
} t_setting;



// parsing 
int     ft_pars_args(int ac, char **av, t_setting *set);
int     ft_atoi(char *str, int *res);
int     ft_isdigit(int c);
long	find_ms(void);