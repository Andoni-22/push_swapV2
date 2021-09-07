
#include "../../includes/push_swap.h"

void	ft_ra(t_push *p)
{
	int	i;
	int	aux;

	i = 0;
	if (p->size_a > 1)
	{
		aux = p->a[i];
		while (i < p->size_a)
		{
			p->a[i] = p->a[i + 1];
			i++;
		}
		p->a[i - 1] = aux;
	}
}

void	ft_rb(t_push *p)
{
	int	i;
	int	aux;

	i = 0;
	if (p->size_b > 1)
	{
		aux = p->b[i];
		while (i < p->size_b)
		{
			p->b[i] = p->b[i + 1];
			i++;
		}
		p->b[i - 1] = aux;
	}
}

void	ft_rr(t_push *p)
{
	ft_ra(p);
	ft_rb(p);
}