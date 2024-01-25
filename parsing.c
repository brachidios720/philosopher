#include "philo.h"

int ft_pars_args(int ac, char **av, t_setting *set)
{
    set->num_philo = 0;
    set->t_die = 0;
    set->t_eat = 0;
    set->t_sleep = 0;
    set->how_much = 0;
    set->start_time = find_ms();
    if(ft_atoi(av[1], &set->num_philo)
        || ft_atoi(av[2], &set->t_die)
        || ft_atoi(av[3], &set->t_eat)
        || ft_atoi(av[4], &set->t_sleep))
        return(0);
    if(set->num_philo < 1)
        return(0);
    if(ac == 6)
    {
        if(ft_atoi(av[5], &set->how_much))
            return(0);
    }
    else 
        set->how_much = -1;
    return(1);
}


// int	ft_isdigit(int c)
// {
// 	return (c >= '0' && c <= '9');
// }

// int ft_parse_args(int ac, char **av, t_setting philo)
// {
//     int i;
//     int num;

//     i = 1;
//     while(i < ac)
//     {
//         num = atoi(av[i]);
//         if(!ft_isdigit(num))
//             return (1);
//         if(num < 0)
//             return (1);
//         if(num > 200)
//         {
//             printf("too much philo");
//             exit(0);
//             return(1);
//         }
//         i++;
//     }
//     return(0);
// }

// int ft_check_args(int ac, char **av)
// {
//     int i;

//     if(av[1][i] < 0)
// }