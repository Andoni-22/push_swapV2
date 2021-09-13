/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarrido <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 10:00:45 by bgarrido          #+#    #+#             */
/*   Updated: 2021/09/08 10:18:10 by bgarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

int	ft_find_low_num (t_push *p)
{
	int	i;
	int	j;

	i = 2147483647;
	j = 0;
	while(j < p->size_a)
	{
		if (i > p->a[j])
			i = p->a[j];
		j++;
	}
	return (i);
}

