/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarrido <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:36:33 by bgarrido          #+#    #+#             */
/*   Updated: 2021/09/08 12:46:31 by bgarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_check_method(int argc)
{
	if (argc <= 1)
	{
		ft_printf("Wrong args\n");
		return (0);
	}
	else if (argc == 2)
		return (1);
	else if (argc > 2)
		return (2);
	return (0);
}

static void	ft_init_struct(t_push *p, char *argv[], int argc)
{
	if (argc == 2)
		ft_get_size(argv[1], p);
	else
		p->tl = argc - 1;
	p->a = malloc(sizeof(int) * (p->tl));
	p->b = ft_calloc(p->tl, sizeof(int));
	p->aux = malloc(sizeof(int) * (p->tl));
	p->size_a = p->tl;
	p->size_b = 0;
}

static void	ft_order_aux(t_push *p)
{
	int	i;
	int	j;

	i = 0;
	while (i < p->tl)
	{
		j = i + 1;
		while (j < p->tl)
		{
			if (p->aux[i] > p->aux[j])
				ft_swap(&p->aux[i], &p->aux[j]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	t_push	p;

	i = ft_check_method(argc);
	if (i == 0)
		return (0);
	ft_init_struct(&p, argv, argc);
	if (i == 1)
		ft_make_split(&p, argv[1]);
	else
		ft_make_atoi(&p, argv);
	ft_order_aux(&p);
//	for(int x = 0 ; x < p.size_a ; x++)
	//	ft_printf("A --> %d ||||||||||||||| B -->%d\n",p.a[x], p.b[x]);
	ft_start_algorithm(&p);
/*	for(int x = 0 ; x < p.size_a ; x++)
	{
		if (p.a[x] > p.a[x + 1])
		{
			ft_printf("\033[0;31mDATA1: %d DATA2: %d\033[0m\n", p.a[x], p.a[x + 1]);
		ft_printf("X VALUE: %d -- SIZE_VALUE: %d\n", x, p.size_a);
		}
		ft_printf("A --> %d \n", p.a[x]);
	}*/
	free (p.a);
	free (p.b);
	free (p.aux);
}
