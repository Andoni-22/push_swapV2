/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarrido <bgarrido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 10:05:28 by bgarrido          #+#    #+#             */
/*   Updated: 2021/08/23 13:19:05 by bgarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_split_args(const char *argv)
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
	if (size == 0)
		return (0);
	return (size + 1);
}
