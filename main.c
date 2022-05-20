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
	print_stack(stack1);
	print_stack(stack2);

	puts("push from stack1 to stack2");
	push(stack2, stack1);
	print_stack(stack1);
	print_stack(stack2);

	puts("push from stack2 to stack1");
	push(stack1, stack2);
	print_stack(stack1);
	print_stack(stack2);

	exit(EXIT_SUCCESS);
}