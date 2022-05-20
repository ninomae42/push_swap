#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack1;
	t_stack	*stack2;

	stack1 = create_stack();
	stack2 = create_stack();

	push_stack(stack1, 1);
	push_stack(stack1, 2);
	push_stack(stack1, 3);
	push_stack(stack2, -1);
	print_stack(stack1);
	print_stack(stack2);

	push_b(stack1, stack2);
	print_stack(stack1);
	print_stack(stack2);

	reverse_rotate_same(stack1, stack2);
	print_stack(stack1);
	print_stack(stack2);

	push_a(stack1, stack2);
	print_stack(stack1);
	print_stack(stack2);

	push_a(stack1, stack2);
	print_stack(stack1);
	print_stack(stack2);

	exit(EXIT_SUCCESS);
}