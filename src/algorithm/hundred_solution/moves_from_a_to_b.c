/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_from_a_to_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarrido <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 10:20:43 by bgarrido          #+#    #+#             */
/*   Updated: 2021/09/08 14:55:33 by bgarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../../../includes/push_swap.h"

void	ft_top_better(t_push *p, int up)
{
	if (up == 0)
		ft_pb(p);
	else
	{
		while (up != 0)
		{
			ft_ra(p);
			up--;
		}
		ft_pb(p);
	}
}

void	ft_bot_better(t_push *p, int bot)
{
	int	aux;

	aux = p->a[bot];
	if (bot == p->size_a)
	{
		ft_rra(p);
		ft_pb(p);
	}
	else
	{
		while (p->a[0] != aux)
		{
			if (p->a[1] == aux)
			{
				ft_sa(p);
				break ;
			}
			ft_rra(p);
		}
		ft_pb(p);
	}
}

int	ft_get_top_pos(t_push *p, int mid)
{
	int	i;

	i = 0;
	while (i < p->size_a - 1)
	{
		if (p->a[i] <= mid)
			break ;
		i++;
	}
	return (i);
}

int	ft_get_bot_pos(t_push *p, int mid)
{
	int	i;

	i = p->size_a - 1;
	while (i != 0)
	{
		if (p->a[i] <= mid)
			break ;
		i--;
	}
	if (p->a[i] <= mid)
		return (i);
	if (i == 0)
		return (p->size_a - 1);
	return (i);
}
