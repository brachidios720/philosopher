#include "../include/philo.h"

int	main(int ac, char **av)
{
	t_setting set;

	if (ac != 5 && ac != 6)
		ft_exit(1);
	ft_pars_args(ac, av, &set);
	ft_printf("j asi faim \n");
	if(init_settings(&set) == 1)
		ft_printf("ERROR\n");
	else 
		ft_printf("good\n");

	ft_printf("test\n");
	ft_printf("%d\n", set.num_philo);
}
