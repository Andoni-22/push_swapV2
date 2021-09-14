/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treatment_rr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afiat-ar <afiat-ar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 09:01:01 by bgarrido          #+#    #+#             */
/*   Updated: 2021/09/14 09:09:17 by afiat-ar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rra(t_push *p)
{
	int	size;
	int	i;
	int	aux;

	size = p->size_a - 1;
	i = 0;
	if (size > 1)
	{
		aux = p->a[size];
		while (i < p->size_a - 1)
		{
			p->a[size] = p->a[size - 1];
			size--;
			i++;
		}
		p->a[0] = aux;
		ft_printf("rra\n");
	}
}

void	ft_rrb(t_push *p)
{
	int	size;
	int	aux;
	int	i;

	size = p->size_b - 1;
	i = 0;
	if (size > 1)
	{
		aux = p->b[size];
		while (i < p->size_b - 1)
		{
			p->b[size] = p->b[size - 1];
			size--;
			i++;
		}
		p->b[0] = aux;
		ft_printf("rrb\n");
	}
}

/*
rra and rrb at the same time
*/
void	ft_rrr(t_push *p)
{
	ft_rra(p);
	ft_rrb(p);
}
