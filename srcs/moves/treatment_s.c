/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treatment_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afiat-ar <afiat-ar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 09:09:44 by afiat-ar          #+#    #+#             */
/*   Updated: 2021/09/14 09:10:09 by afiat-ar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_sa(t_push *p)
{
	if (p->size_a <= 0)
		return ;
	ft_swap(&p->a[0], &p->a[1]);
	ft_printf("sa\n");
}

void	ft_sb(t_push *p)
{
	if (p->size_b <= 0)
		return ;
	ft_swap(&p->b[0], &p->b[1]);
	ft_printf("sb\n");
}

void	ft_ss(t_push *p)
{
	ft_sa(p);
	ft_sb(p);
}
