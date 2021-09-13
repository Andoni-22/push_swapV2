/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option_no_split.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarrido <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:16:21 by bgarrido          #+#    #+#             */
/*   Updated: 2021/09/01 15:19:00 by bgarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_make_atoi(t_push *p, char *argv[])
{
	int	i;

	i = 0;
	while (i < p->tl)
	{
		p->a[i] = ft_atoi(argv[i + 1]);
		p->aux[i] = ft_atoi(argv[i + 1]);
		i++;
	}
}
