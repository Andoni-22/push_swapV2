#include "../../includes/push_swap.h"

static int	ft_check_up_moves(t_push *p, int max_value_in_chunk)
{
	int	i;

	i = 0;
	while (i < p->size_a)
	{
		if (p->a[i] < max_value_in_chunk)
			return (i);
		i++;
	}
	return (0);
}

static int	ft_check_down_moves(t_push *p, int max_value_in_chunk)
{
	int	i;

	i = p->size_a - 1;
	while (i > 0)
	{
		if (p->a[i] < max_value_in_chunk)
			return (i);
		i--;
	}
	return (0);
}

static void	ft_case_up(int change_value, t_push *p)
{
	while (p->a[0] != change_value)
	{
		if (p->a[1] == change_value)
		{
			ft_launch_sa(p);
			break ;
		}
		ft_launch_ra(p);
	}
	ft_launch_pb(p);
}

static void	ft_case_down(int change_value, t_push *p)
{
	while (p->a[0] != change_value)
	{
		if (p->a[1] == change_value)
		{
			ft_launch_sa(p);
			break ;
		}
		//ft_printf("change_value -> %d && A[0] = %d\n", change_value, p->a[0]);
		ft_launch_rra(p);
	}
	ft_launch_pb(p);
}

void	ft_order_hundred_nums(t_push *p)
{
	int	i;
	int	down_moves;
	int	up_moves;
	int	chunk_size;
	int	x;
	int	size;

	x = 0;
	i = 0;
	size = p->size_a;
	chunk_size = 20;
	if (p->size_a % 20 != 0)
		chunk_size = 1;
	while ((p->size_a) != 0)
	{
		i = 0;
		x += chunk_size;
		while (i < chunk_size)
		{
			if (x >= size)
				x = size - 1;
			down_moves = ft_check_down_moves(p, p->aux[x]);
			up_moves = ft_check_up_moves(p, p->aux[x]);
			if (up_moves < (p->size_a - 1) - down_moves)
				ft_case_up(p->a[up_moves], p);
			else
				ft_case_down(p->a[down_moves], p);
			i++;
		}
	}
	ft_order_stack_b(p);
}
