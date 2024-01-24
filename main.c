#include "philo.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	t_setting set;

	if (ac != 5 && ac != 6)
		printf("ARG ERROR\n");
	if(!(ft_pars_args(ac, av, &set)))
		printf("ARG ERROR\n");
	
}
