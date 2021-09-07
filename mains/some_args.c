
#include "../includes/push_swap.h"

void	ft_init_struct(t_push *p, int size)
{
	p->a = (int *)malloc (sizeof(int) * (size));
	p->aux = (int *)malloc (sizeof(int) * (size));
	p->b = ft_calloc((size), sizeof(int));
	p->size_a = size;
	p->size_b = 0;
}

void    ft_some_args(t_push *p, int argc, char *argv[])
{
	int	i;

	i = 0;
	ft_init_struct(p, argc - 1);
	while (i < (p->size_a))
	{
		p->a[i] = ft_atoi(argv[i + 1]);
		p->aux[i] = ft_atoi(argv[i + 1]);
		i++;
	}
}
