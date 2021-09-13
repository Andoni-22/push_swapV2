/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_arr_interaction.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarrido <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:51:48 by bgarrido          #+#    #+#             */
/*   Updated: 2021/09/07 12:14:15 by bgarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	ft_aux_value_changer(t_push *p)
{
	int	i;

	i = 0;
	while (i < p->tl)
	{
		p->aux[i] = i + 1;
		i++;
	}
}

void	ft_change_value(t_push *p)
{
	int	i;
	int	j;

	i = 0;
	while (i < p->tl)
	{
		j = 0;
		while (j < p->tl)
		{
			if (p->a[i] == p->aux[j])
			{
				p->a[i] = j + 1;
				break ;
			}
			j++;
		}
		i++;
	}
	ft_aux_value_changer(p);
}
