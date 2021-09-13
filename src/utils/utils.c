/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarrido <bgarrido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 12:56:45 by afiat-ar          #+#    #+#             */
/*   Updated: 2021/09/08 15:38:34 by bgarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	ft_find_max_pos(t_push *p, int max)
{
	int	i;

	i = 0;
	while (i < p->size_b)
	{
		if (p->b[i] == max)
			return (i);
		i++;
	}
	return (i);
}
