#include "../../includes/push_swap.h"

void	ft_pa(t_push *p)
{
	int	count;

	count = p->size_a;
	while (count >= 1)
	{
		p->a[count] = p->a[count - 1];
		count--;
	}
	p->a[0] = p->b[0];
	count = 0;
	while (p->size_b - 1 >= (count) + 1)
	{
		p->b[count] = p->b[count + 1];
		count++;
	}
	p->b[count] = 0;
}

void	ft_pb(t_push *p)
{
	int	count;

	count = p->size_b;
	while (count >= 1)
	{
		p->b[count] = p->b[count - 1];
		count--;
	}
	p->b[0] = p->a[0];
	count = 0;
	while (p->size_a - 1 >= (count) + 1)
	{
		p->a[count] = p->a[count + 1];
		count++;
	}
	p->a[count] = 0;
}
