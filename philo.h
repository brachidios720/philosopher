/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:26:06 by rcarbonn          #+#    #+#             */
/*   Updated: 2024/01/23 20:16:07 by rcarbonn         ###   ########.fr       */
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
    int id;
    pthread_t thread;
    long last_meal;
    int c_meal;
    struct s_setting *set;

} t_philo;

typedef struct setting_s
{
    t_philo *philo;
    int t_die;
    int t_eat;
    int t_howmuch;
    int t_sleep;
    int start_time;
    pthread_mutex_t forks;
    pthread_mutex_t status;
    pthread_mutex_t meal_time;
    int num_philo;
} t_setting;


// parsing 
int     ft_pars_args(int ac, char **av, t_setting *set);
int     ft_atoi(char *str, int *res);
int     ft_isdigit(int c);
long	find_ms(void);