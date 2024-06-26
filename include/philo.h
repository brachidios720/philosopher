/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaelcarbonnel <raphaelcarbonnel@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:26:06 by rcarbonn          #+#    #+#             */
/*   Updated: 2024/06/25 17:21:41 by raphaelcarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include <stddef.h>
#include <unistd.h>
#include "../libft/libft.h"


typedef struct philo_s
{
	struct s_setting *set; //lier struct
	long 	last_meal; // dernier repas
	int		id;	//num philo 
	int 	right; // a droite
	int 	left; // a gauche 
	
} t_philo;

typedef struct setting_s
{
	int num_philo; // nombre de philo
	int t_die; // temps de mort
	int t_eat; // temps de repas
	int t_sleep; // temps de repos
	int how_much; // combien de repas
	int start_time; // lancement du programme
	pthread_t num; // les threads 
	pthread_mutex_t *forks; // fourchettes
    t_philo *philo; // acces paramettre des philos
	
} t_setting;



// parsing 
void    ft_pars_args(int ac, char **av, t_setting *set);
int     ft_atoi_dif(char *str);
int     ft_isdigit_dif(char *str);
long	find_ms(void);

// initialisation 

void init_philo(t_setting *set);
int init_settings(t_setting *set);
void init_forks (t_setting *set);

// error

void	ft_exit(int i);
void	ft_clear(t_setting *set);