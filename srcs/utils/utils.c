#include "../../includes/push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	*ft_get_order_stack(t_push *p)
{
	int	i;
	int	j;
	int	*aux;

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

