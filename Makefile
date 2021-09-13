MAINDIR = main
OPTS = src/stack_options
MVDIR = src/moves
UDIR = src/utils
ADIR = src/algorithm

SOURCES =		$(MAINDIR)/main.c								\
				$(OPTS)/option_no_split.c						\
				$(OPTS)/option_split.c							\
				$(MVDIR)/treatment_p.c							\
				$(MVDIR)/treatment_r.c							\
				$(MVDIR)/treatment_rr.c							\
				$(MVDIR)/treatment_s.c							\
				$(UDIR)/utils.c									\
				$(ADIR)/algorithm_start.c						\
				$(ADIR)/three_solution/cases.c					\
				$(ADIR)/five_or_four_solutions/five_solution.c	\
				$(ADIR)/five_or_four_solutions/five_utils.c		\
				$(ADIR)/hundred_solution/hundred_num_solution.c	\
				$(ADIR)/hundred_solution/moves_from_a_to_b.c	\
				$(UDIR)/aux_arr_interaction.c					\
				$(ADIR)/hundred_solution/order_stack_b.c		\
	
name =	push_swap

all:	
	$(MAKE) -C includes/libft
	$(MAKE) -C includes/ft_printf
	gcc -fsanitize=address -g3 $(SOURCES) includes/libft/libft.a includes/ft_printf/libftprintf.a -o $(name)
	# -ggdb -fsanitize=address -fno-omit-frame-pointer
	
clean: 
	rm -rf $(name)
	$(MAKE) fclean -C includes/libft
	$(MAKE) fclean -C includes/ft_printf

fclean:
	rm -rf $(name)	
	$(MAKE) fclean -C includes/libft
	$(MAKE) fclean -C includes/ft_printf




.PHONY:
	all, fclean, clean
