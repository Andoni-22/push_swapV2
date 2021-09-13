/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_stack_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarrido <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:07:44 by bgarrido          #+#    #+#             */
/*   Updated: 2021/09/13 10:51:19 by bgarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

static void	ft_order_from_top(t_push *p, int max_value)
{
	while (p->b[0] != max_value)
	{
		if (p->b[1] == max_value)
		{
			ft_sb(p);
			break ;
		}
		ft_rb(p);
	}
	ft_pa(p);
}

static void	ft_order_from_bot(t_push *p, int max_value)
{
	while (p->b[0] != max_value)
	{
		ft_rrb(p);
	}
	ft_pa(p);
}

static void	ft_order_b(t_push *p, int max_value, int max_pos)
{
	if (p->size_b > 2)
	{
		if (max_pos < p->size_b - max_pos)
			ft_order_from_top(p, max_value);
		else
			ft_order_from_bot(p, max_value);
	}
	else
	{
		if(max_pos == 1)
			ft_sb(p);
		ft_pa(p);
		ft_pa(p);
	}
}

void	ft_last_order(t_push *p)
{
	int	max_value;
	int	max_pos;
	int	x;

	x = p->size_b - 1;
	while (p->size_b != 0)
	{
		max_value = p->aux[x];
		max_pos = ft_find_max_pos(p, max_value);
		ft_order_b(p, max_value, max_pos);
		x--;
	}
}
