/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarrido <bgarrido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 12:48:20 by afiat-ar          #+#    #+#             */
/*   Updated: 2021/08/24 11:16:55 by bgarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static char	*ft_jump_spcs(char *aux)
{
	while (*aux == ' ' || *aux == '\t' || *aux == '\r'
		|| *aux == '\f' || *aux == '\v' || *aux == '\n')
		aux++;
	return (aux);
}

static int	ft_check_nb_max(unsigned long long result, int mult)
{
	unsigned long long	i;

	i = 9223372036854775807;
	if (result > i)
	{
		if (mult == -1 && result != i++)
			result = 0;
		else
			result = -1;
	}
	return (result);
}

static int	error_msg(void)
{
	ft_printf("Error");
	return (0);
}

int	ft_atoi_error(const char *str, int *result)
{
	char				*aux;
	int					mult;

	mult = 1;
	aux = (char *)str;
	*result = 0;
	aux = ft_jump_spcs(aux);
	if (*aux == '+' || *aux == '-')
	{
		if (*aux == '-')
			mult = -1;
		aux++;
	}
	while (*aux)
	{
		if (*aux < 48 || 57 < *aux)
			return (error_msg());
		else
			*result = (*result * 10) + (long long int)(*aux - '0');
		aux++;
	}
	*result = ft_check_nb_max(*result, mult);
	*result = *result * mult;
	return (1);
}
