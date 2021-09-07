#include "../../includes/push_swap.h"

void	ft_order_three_nums(t_push *p)
{
	if (p->a[0] > p->a[1] && p->a[1] < p->a[2] && p->a[0] < p->a[2])
		ft_case_one(p);
	else if (p->a[0] > p->a[1] && p->a[0] > p->a[2] && p->a[1] > p->a[2])
		ft_case_two(p);
	else if (p->a[0] > p->a[1] && p->a[0] > p->a[2] && p->a[1] < p->a[2])
		ft_case_three(p);
	else if (p->a[0] < p->a[1] && p->a[0] < p->a[2] && p->a[1] > p->a[2])
		ft_case_four(p);
	else if (p->a[0] < p->a[1] && p->a[0] > p->a[2] && p->a[1] > p->a[2])
		ft_case_five(p);
}

void	ft_order_two_nums(t_push *p)
{
	if (p->size_a == 2)
	{
		if (p->a[0] > p->a[1])
			ft_launch_sa(p);
	}
}

void	ft_create_solution(t_push *p)
{
	if (p->size_a < 3)
		ft_order_two_nums(p);
	else if (p->size_a == 3)
		ft_order_three_nums(p);
	else if (p->size_a <= 5)
		ft_order_five_nums(p);
	else
		ft_order_hundred_nums(p);
}
