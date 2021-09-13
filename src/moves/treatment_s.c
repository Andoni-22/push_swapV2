/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treatment_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarrido <bgarrido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 08:42:32 by bgarrido          #+#    #+#             */
/*   Updated: 2021/09/08 12:08:21 by bgarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
swap the first 2 elements at the top of stack a.
IF:
1
2
3
SET:
2
1
3
*/
void	ft_sa(t_push *p)
{
	if (p->size_a <= 0)
		return ;
	ft_swap(&p->a[0], &p->a[1]);
	ft_printf("sa\n");
}

/*
swap the first 2 elements at the top of stack b.
IF:
1
2
3
SET:
2
1
3
*/
void	ft_sb(t_push *p)
{
	if (p->size_b <= 0)
		return ;
	ft_swap(&p->b[0], &p->b[1]);
	ft_printf("sb\n");
}

/*
swap the first 2 elements at the top of stack a and b.
IF:
1	3
2	2
3	1
SET:
2	2
1	3
3	1
*/
void	ft_ss(t_push *p)
{
	ft_sa(p);
	ft_sb(p);
}
