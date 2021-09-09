#include "../includes/push_swap.h"

static int	ft_get_size(char *argv)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (argv[i] != '\0' || argv[i + 1] != '\0')
	{
		if (argv[i] == 32)
			size++;
		i++;
	}
	if (size == 0)
		return (0);
	return (size + 1);
}

static void	ft_free_tmp(char **tmp, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		free(tmp[i]);
		i++;
	}
	free(tmp);
}

void	ft_unique_args(t_push *p, int argc, char *argv[])
{
	int		i;
	int		tmp_size;
	char	**tmp;

	i = 0;
	tmp_size = ft_get_size(argv[1]);
	ft_init_struct(p, tmp_size);
	tmp = ft_split(argv[1], ' ');
	while (tmp[i] != NULL)
	{
		p->a[i] = ft_atoi(tmp[i]);
		p->a[i] = ft_atoi(tmp[i]);
		i++;
	}
	ft_free_tmp(tmp, tmp_size);
}
