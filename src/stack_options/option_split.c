/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarrido <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:08:52 by bgarrido          #+#    #+#             */
/*   Updated: 2021/09/01 13:39:59 by bgarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_get_size(char *argv, t_push *p)
{
	int	size;
	int	i;

	i = 0;
	size = 0;
	while (argv[i + 1] != '\0')
	{
		if (argv[i] == 32)
			size++;
		i++;
	}
	p->tl = size + 1;
}

void	ft_make_split(t_push *p, const char *src)
{
	char	**tmp;
	int		i;

	tmp = ft_split(src, ' ');
	i = 0;
	while (i < p->tl)
	{
		p->a[i] = ft_atoi(tmp[i]);
		p->aux[i] = ft_atoi(tmp[i]);
		i++;
	}
	free(tmp);
}
