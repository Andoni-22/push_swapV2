
#include "../../includes/push_swap.h"

void	ft_rra(t_push *p)
{
	int	aux;
	int	size;

	size = p->size_a;
	if (size > 1)
	{
		aux = p->a[size - 1];
		while (size != 0)
		{
			p->a[size] = p->a[size - 1];
			size--;
		}
		p->a[0] = aux;
	}
}

void	ft_rrb(t_push *p)
{
	int	size;
	int	aux;

	size = p->size_b;
	if (size > 1)
	{
		aux = p->b[size - 1];
		while (size != 0)
		{
			p->b[size] = p->b[size - 1];
			size--;
		}
		p->b[0] = aux;
	}
}

void	ft_rrr(t_push *p)
{
	ft_rra(p);
	ft_rrb(p);
}