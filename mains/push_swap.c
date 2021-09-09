#include "../includes/push_swap.h"

static void	ft_free_struct(t_push *p)
{
	free(p->a);
	free(p->b);
	free(p->aux);
}

int	main(int argc, char *argv[])
{
	t_push	p;
	int		i;

	if (argc == 2)
		ft_unique_args(&p, argc, argv);
	else if (argc > 2)
		ft_some_args(&p, argc, argv);
	else
		ft_printf("ERROR\n");
	p.aux = ft_get_order_stack(&p);
	ft_create_solution(&p);
	ft_free_struct(&p);
	return (0);
}
