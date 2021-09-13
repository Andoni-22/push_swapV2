/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_solution.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarrido <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:00:55 by bgarrido          #+#    #+#             */
/*   Updated: 2021/09/08 10:18:25 by bgarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

static int	ft_make_ra(t_push *p, int low_num)
{
	int	i;

	i = 0;
	while (1)
	{
	//	ft_printf("p->a[0] --> %d\n", p->a[0]);
		if (p->a[0] == low_num)
			break ;
		ft_ra(p);
	}
	return (i);
}

static void	ft_loop(t_push *p)
{
	int	low_num;

	low_num = ft_find_low_num(p);	
	ft_make_ra(p, low_num);
	ft_pb(p);
}

 static void	ft_case_four_nums(t_push *p)
{
	ft_loop(p);
	ft_three_solution(p);
	ft_pa(p);
}

static void	ft_case_five_nums(t_push *p)
{
	int	times;

	times = 0;
	while (times < 2)
	{
		ft_loop(p);
		times++;
	}
	ft_three_solution(p);
	ft_pa(p);
	ft_pa(p);
}

void	ft_order_five_nums(t_push *p)
{
	if (p->tl == 4)
		ft_case_four_nums(p);
	else
		ft_case_five_nums(p);
}
