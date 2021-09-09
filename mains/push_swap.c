
#include "../includes/push_swap.h"

static void ft_free_struct(t_push *p)
{
    free(p->a);
    free(p->b);
    free(p->aux);
}

int main(int argc, char *argv[])
{
    t_push  p;
    int i;

    if (argc == 2)
        ft_unique_args(&p, argc, argv);
    else if(argc > 2)
        ft_some_args(&p, argc, argv);
    else
        ft_printf("ERROR\n");
    /*ft_printf("\033[0;35mINIT VALUES\n\033[0;37m");
    i = 0;
    while (i < p.size_a)
    {
        ft_printf("A[%d] = %d || B[%d] = %d\n", i, p.a[i], i, p.b[i]);
        i++;
    }*/
    ft_create_solution(&p);
    /*ft_printf("\033[0;35mFINAL VALUES\n\033[0;37m");
    i = 0;
    while (i < p.size_a)
    {
        ft_printf("A[%d] = %d || B[%d] = %d\n", i, p.a[i], i, p.b[i]);
        i++;
    }*/
    
    ft_free_struct(&p);
    return (0);
}