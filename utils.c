/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:02:20 by raphaelcarb       #+#    #+#             */
/*   Updated: 2024/01/23 00:35:28 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <stdio.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int		ft_atoi(char *str, int *res)
{
	int i;
	int np;

	i = 0;
	np = 1;
	if (*str == '-' && *str)
	{
		np *= -1;
		str++;
	}
	if(!*str)
		return(0);
	while(str[i])
	{
		if(ft_isdigit(str[i]) == 1)
			*res = (*res * 10) + (str[i++] + 0);
		else 
			return(1);
	}
	if(*res * np > 2147483647 || *res * np < -2147483647)
		return(1);
	*res = *res * np;
	return(0);
}

long	find_ms(void)
{
	struct timeval current_time;
	
	gettimeofday(&current_time, NULL);
	return((current_time.tv_sec * 1000) + (current_time.tv_usec / 1000));
}