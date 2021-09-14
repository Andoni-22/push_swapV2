/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treatment_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afiat-ar <afiat-ar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 08:54:52 by bgarrido          #+#    #+#             */
/*   Updated: 2021/09/14 09:08:58 by afiat-ar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_ra(t_push *p)
{
	int	size;
	int	i;
	int	aux;

	size = p->size_a;
	i = 0;
	if (size > 1)
	{
		aux = p->a[0];
		while (i < p->size_a - 1)
		{
			p->a[i] = p->a[i + 1];
			i++;
		}
		p->a[size - 1] = aux;
		ft_printf("ra\n");
	}
}

void	ft_rb(t_push *p)
{
	int	size;
	int	i;
	int	aux;

	size = p->size_b;
	i = 0;
	if (size > 1)
	{
		aux = p->b[0];
		while (i < p->size_b - 1)
		{
			p->b[i] = p->b[i + 1];
			i++;
		}
		p->b[i - 1] = aux;
		ft_printf("rb\n");
	}
}

/*
ra and rb at the same time
*/
void	ft_rr(t_push *p)
{
	ft_ra(p);
	ft_rb(p);
}
