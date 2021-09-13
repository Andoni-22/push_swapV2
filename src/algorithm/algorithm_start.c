/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_start.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarrido <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:09:39 by bgarrido          #+#    #+#             */
/*   Updated: 2021/09/08 15:37:46 by bgarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../../includes/push_swap.h"

void	ft_three_solution(t_push *p)
{
	if (p->a[0] > p->a[1] && p->a[1] < p->a[2] && p->a[0] < p->a[2])
		ft_case_one(p);
	else if (p->a[0] > p->a[1] && p->a[0] > p->a[2] && p->a[1] > p->a[2])
		ft_case_two(p);
	else if (p->a[0] > p->a[1] && p->a[0] > p->a[2] && p->a[1] < p->a[2])
		ft_case_three(p);
	else if (p->a[0] < p->a[1] && p->a[0] < p->a[2] && p->a[1] > p->a[2])
		ft_case_four(p);
	if (p->a[0] < p->a[1] && p->a[0] > p->a[2] && p->a[1] > p->a[2])
		ft_case_five(p);
}

static void	ft_order_two(t_push *p)
{
	if (p->a[0] > p->a[1])
	{
		ft_sa(p);
		ft_printf("sa\n");
	}
}

void	ft_start_algorithm(t_push *p)
{
	ft_change_value(p);
	if (p->tl == 2)
		ft_order_two(p);
	else if (p->tl == 3)
		ft_three_solution(p);
	else if (p->tl <= 5)
		ft_order_five_nums(p);
	else
		ft_order_hundred_nums(p);
}
