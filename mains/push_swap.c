#include "../includes/push_swap.h"

static void	ft_free_struct(t_push *p)
{
	free(p->a);
	free(p->b);
	free(p->aux);
}
static void	ft_error(t_push *p)
{
	ft_printf("ERROR\n");
	ft_free_struct(p);
	exit(1);
}

static void	ft_check_errors(t_push *p)
{
	int	i;
	int	j;

	i = 0;
	while (i < p->size_a)
	{
		j = 0;
		while (j < i)
		{
			if (p->a[i] == p->a[j])
				ft_error(p);
			j++;
		}
		i++;
	}
}

void	ft_check_max_int(t_push *p)
{
	int	i;

	i = 0;
	while (i < p->size_a)
	{
		if (p->a[i] > 2147483647)
			ft_error(p);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	t_push	p;
	int		i;
	int		order;

	order = 0;
	if (argc == 2)
		ft_unique_args(&p, argc, argv);
	else if (argc > 2)
		ft_some_args(&p, argc, argv);
	else
		ft_error(&p);
	ft_check_errors(&p);
	ft_check_max_int(&p);
	order = ft_check_is_order(&p);
	if (order == 0)
		return (0);
	p.aux = ft_get_order_stack(&p);
	ft_create_solution(&p);
	ft_free_struct(&p);	
	return (0);
}
