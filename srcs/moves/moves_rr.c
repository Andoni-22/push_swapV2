#include "../../includes/push_swap.h"

void	ft_rra(t_push *p)
{
	int	count;
	int	aux;

	aux = p->a[p->size_a - 1];
	count = p->size_a - 1;
	while (count >= 1)
	{
		p->a[count] = p->a[count - 1];
		count--;
	}
	p->a[0] = aux;
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
