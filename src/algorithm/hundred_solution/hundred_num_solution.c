/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred_num_solution.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarrido <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 09:29:57 by bgarrido          #+#    #+#             */
/*   Updated: 2021/09/13 11:04:29 by bgarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../../../includes/push_swap.h"

static int	ft_get_chunks(t_push *p)
{
	int chunk_size;

	chunk_size = 20;
	if (p->size_a + 1 % 20 != 0)
	   chunk_size = 1;
	return (chunk_size);
}

static void	ft_send_to_b(t_push *p, int up, int down)
{
	if (up < p->size_a - down)
	{
		ft_top_better(p, up);
	}
	else
	{
		ft_bot_better(p, down);
	}
}

static void	ft_last_chunk(t_push *p)
{
	while (p->size_a != 0)
		ft_pb(p);
}

void	ft_order_hundred_nums(t_push *p)
{
	int	i;
	int	j;
	int	y;
	int	chunk_size;
	int	x;

	x = 0;
	chunk_size = ft_get_chunks(p);
	while (p->size_a != 0)
	{
		y = 0;
		x += chunk_size;	
		while (y < chunk_size)
		{
			i = ft_get_top_pos(p, p->aux[x - 1]);
			j = ft_get_bot_pos(p, p->aux[x - 1]);
			ft_send_to_b(p, i, j);
			y++;
		}
	}
	ft_last_order(p);
}
