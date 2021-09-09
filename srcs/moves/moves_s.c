#include "../../includes/push_swap.h"

void	ft_sa(t_push *p)
{
	if (p->size_a <= 0)
		return ;
	ft_swap(&p->a[0], &p->a[1]);
}

void	ft_sb(t_push *p)
{	
	if (p->size_b <= 0)
		return ;
	ft_swap(&p->b[0], &p->b[1]);
}

void	ft_ss(t_push *p)
{
	ft_sa(p);
	ft_sb(p);
}
