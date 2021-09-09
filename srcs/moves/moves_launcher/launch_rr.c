#include "../../../includes/push_swap.h"

void	ft_launch_rra(t_push *p)
{
	ft_rra(p);
	ft_printf("rra\n");
}

void	ft_launch_rrb(t_push *p)
{
	ft_rrb(p);
	ft_printf("rrb\n");
}

void	ft_launch_rrr(t_push *p)
{
	ft_rra(p);
	ft_rrb(p);
	ft_printf("rrr\n");
}
