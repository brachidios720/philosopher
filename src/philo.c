#include "../include/philo.h"

int	main(int ac, char **av)
{
	t_setting set;

	if (ac != 5 && ac != 6)
		ft_printf("ARG ERROR\n");
	ft_pars_args(ac, av, &set);
	ft_printf("test\n");
	ft_printf("%d\n", set.num_philo);
}
