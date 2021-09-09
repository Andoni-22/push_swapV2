#include "../../includes/push_swap.h"

static int	*ft_get_order_stack(t_push *p)
{
	int	i;
	int	j;
	int *aux;

	aux = (int *) malloc(sizeof(int) * (p->size_a));
	i = 0;
	while (i < p->size_a)
	{
		aux[i] = p->a[i];
		i++;
	}
	i = 0;
	while (i < p->size_a)
	{
		j = i + 1;
		while (j < p->size_a)
		{
			if (aux[i] > aux[j])
				ft_swap(&aux[i], &aux[j]);
			j++;
		}
		i++;
	}
	return (aux);
}

static int	ft_detect_cut_size(int size)
{
	if (size % 10 == 0)
		return (10);
	else if (size % 6 == 0)
		return (6);
	else if (size % 5 == 0)
		return (5);
	else if (size % 3 == 0)
		return (3);
	else if (size % 2 == 0)
		return (2);
	return (0);
}

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
static void	ft_order_stack_b(t_push *p)
{
	int	max_value;
	int	i;
	int	change_value;

	i = 0;
	max_value = -2147483647;
	while (p->size_b != 0)
	{
		i = 0;
		max_value = -2147483647;
		while (i < p->size_b)
		{
			if (p->b[i] > max_value)
				max_value = p->b[i];
			i++;
		}
		i = 0;
		while (p->b[i] != max_value)
			i++;
		if (i < ((p->size_b -1) - i))
		{
			change_value = p->b[i];
			while (p->b[0] != change_value)
			{
				if (p->b[1] == change_value)
					ft_launch_sb(p);
				else
					ft_launch_rb(p);
			}
			ft_launch_pa(p);
		}
		else
		{
			change_value = p->b[i];
			while (p->b[0] != change_value)
			{
				if (p->b[1] == change_value)
					ft_launch_sb(p);
				else
					ft_launch_rrb(p);
			}
			ft_launch_pa(p);
		}
	}
}
static void	ft_case_up(int change_value, t_push *p)
{
	while (p->a[0] != change_value)
	{
		if (p->a[1] == change_value)
		{
			ft_launch_sa(p);
			break;
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
			break;
		}
		ft_launch_rra(p);
	}
	ft_launch_pb(p);
}

void	ft_order_hundred_nums(t_push *p)
{
	int	i;
	int	down_moves;
	int	up_moves;
	int	size;
	int	x = 0;

	p->aux = ft_get_order_stack(p);
	size = p->size_a;
	i = 0;
	while ((p->size_a) != 0)
	{
		i = 0;
		x += 20;
		while (i < 20)
		{
			down_moves = ft_check_down_moves(p, p->aux[x]);
			up_moves = ft_check_up_moves(p, p->aux[x]);
			if (up_moves < (p->size_a -1) - down_moves)
				ft_case_up(p->a[up_moves], p);
			else
				ft_case_down(p->a[down_moves], p);
			i++;
		}
	}
	ft_order_stack_b(p);
}