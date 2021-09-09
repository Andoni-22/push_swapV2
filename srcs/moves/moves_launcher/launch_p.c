#include "../../../includes/push_swap.h"

void	ft_launch_pa(t_push *p)
{
	ft_pa(p);
	ft_printf("pa\n");
	p->size_a++;
	p->size_b--;
}

void	ft_launch_pb(t_push *p)
{
	ft_pb(p);
	ft_printf("pb\n");
	p->size_b++;
	p->size_a--;
}
