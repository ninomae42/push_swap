#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = create_stack();
	stack_b = create_stack();

	setup_stack(argc, argv, stack_a);
	do_sort(stack_a, stack_b);
	exit(EXIT_SUCCESS);
}