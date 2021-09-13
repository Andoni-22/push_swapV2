/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgarrido <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:40:41 by bgarrido          #+#    #+#             */
/*   Updated: 2021/09/08 10:04:51 by bgarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include "./ft_printf/srcs/ft_printf.h"

typedef struct s_push
{
	int	*a;
	int	*b;
	int	*aux;
	int	tl;
	int	size_a;
	int	size_b;
}	t_push;

//FILL STACKS
void	ft_make_atoi(t_push *p, char *argv[]);
void	ft_make_split(t_push *p, const char *src);
void	ft_get_size(char *argv, t_push *p);
//MOVEMENTS PART
void	ft_pa(t_push *p);
void	ft_pb(t_push *p);
void	ft_ra(t_push *p);
void	ft_rb(t_push *p);
void	ft_rr(t_push *p);
void	ft_rra(t_push *p);
void	ft_rrb(t_push *p);
void	ft_rrr(t_push *p);
void	ft_sa(t_push *p);
void	ft_sb(t_push *p);
void	ft_ss(t_push *p);
//UTILS
void	ft_swap(int *a, int *b);
//ALGORITHM
void	ft_start_algorithm(t_push *p);
//	Case of Three Solutions
void	ft_case_one(t_push *p);
void	ft_case_two(t_push *p);
void	ft_case_three(t_push *p);
void	ft_case_four(t_push *p);
void	ft_case_five(t_push *p);

void	ft_three_solution(t_push *p);

void	ft_order_five_nums(t_push *p);
int		ft_find_low_num(t_push *p);

void	ft_order_hundred_nums(t_push *p);
void	ft_change_value(t_push *p);
void	ft_top_better(t_push *p, int up);
void	ft_bot_better(t_push *p, int up);
int		ft_get_top_pos(t_push *p, int mid);
int		ft_get_bot_pos(t_push *p, int mid);
void	ft_last_order(t_push *p);
int		ft_find_max_value(t_push *p);
int		ft_find_max_pos(t_push *p, int max );
#endif 
