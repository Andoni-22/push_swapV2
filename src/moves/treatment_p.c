/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treatment_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarrido <bgarrido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 13:26:11 by afiat-ar          #+#    #+#             */
/*   Updated: 2021/09/08 08:56:01 by bgarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
take the first element at the top of b and put it at the top of a. Do
nothing if b is empty
IF:
1	4
2	5
3	6
SET:
4	5
1	6
2	
3	
*/
void	ft_pa(t_push *p)
{
	int	count;

	count = p->size_a;
	while (count >= 1)
	{
		p->a[count] = p->a[count - 1];
		count--;
	}
	p->a[0] = p->b[0];
	count = 0;
	while (p->size_b > count + 1)
	{
		p->b[count] = p->b[count + 1];
		count++;
	}
	p->size_b--;
	p->b[count] = 0;
	p->size_a++;
	ft_printf("pa\n");
}

void	ft_pb(t_push *p)
{
	int	count;

	count = p->size_b;
	while (count >= 1)
	{
		p->b[count] = p->b[count - 1];
		count--;
	}
	p->b[0] = p->a[0];
	count = 0;
	while (p->size_a > (count) + 1)
	{
		p->a[count] = p->a[count + 1];
		count++;
	}
	p->size_a--;
	p->a[p->size_a] = 0;
	p->size_b++;
	ft_printf("pb\n");
}
