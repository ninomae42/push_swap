#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack;

	stack = create_stack();

	push_stack(stack, 1);
	push_stack(stack, 2);
	push_stack(stack, 3);
	print_stack(stack);
	while (0 < stack->size)
	{
		printf("%d poped from the stack.\n", pop_stack(stack));
	}
	print_stack(stack);
	exit(EXIT_SUCCESS);
}