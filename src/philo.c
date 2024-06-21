#include "../include/philo.h"

int	main(int ac, char **av)
{
	t_setting set;
	t_philo philo;

	if (ac != 5 && ac != 6)
		ft_printf("ARG ERROR\n");
	ft_pars_args(ac, av, &set);
	if(init_settings(&set, &philo) == 1)
		ft_printf("ERROR\n");
	ft_printf("test\n");
	ft_printf("%d\n", set.num_philo);
}
