#include "philo.h"

int ft_parse_args(int ac, char **av)
{
    int i;
    int num;

    i = 1;
    while(i < ac)
    {
        num = ft_atoi(av[i]);
        if(!ft_isdigit(num))
            return (1);
        if(num < 0)
            return (1);
        if(av[1] > 200)
        {
            ft_printf("too much philo");
            exit(0);
            return(1);
        }
        i++;
    }
    return(0);
}

// int ft_check_args(int ac, char **av)
// {
//     int i;

//     if(av[1][i] < 0)
// }–