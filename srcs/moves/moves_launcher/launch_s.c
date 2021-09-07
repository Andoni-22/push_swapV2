
#include "../../../includes/push_swap.h"

void	ft_launch_sa(t_push *p)
{
	ft_sa(p);
	ft_printf("sa\n");
}

void	ft_launch_sb(t_push *p)
{	
	ft_sb(p);
	ft_printf("sb\n");
}

void	ft_launc_ss(t_push *p)
{
	ft_sa(p);
	ft_sb(p);
	ft_printf("ss\n");
}
