#include "philo.h"

int main(int ac, char **av)
{
    if(ac > '5' || ac < '6')
        ft_print_args_error();
    ft_pars_args(ac, av);
    
}