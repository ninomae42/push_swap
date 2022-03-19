#include "push_swap.h"
#include "libft.h"

int	main(int argc, char *argv[])
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	size_t		i;

	(void)argc;
	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	while (argv[i] != NULL)
	{
		add_element(&stack_a, ft_atoi(argv[i]));
		i++;
	}
	add_element(&stack_b, 42);
	push(&stack_a, &stack_b);
	/* reverse_rotate(&stack_a); */
	printf("stack_size(a): %zu\n", stack_cnt(stack_a));
	printf("stack_size(b): %zu\n", stack_cnt(stack_b));
	while (stack_a != NULL)
	{
		printf("%d poped from stack\n", pop(&stack_a));
	}
	/* printf("\n%d peeked from stack\n", peek(stack_a)); */
	/* printf("swap\n"); */
	/* swap(&stack_a); */
	/* printf("%d peeked from stack\n", peek(stack_a)); */
	/* printf("%d poped from stack\n", pop(&stack_a)); */
	/* printf("%d peeked from stack\n", peek(stack_a)); */
	/* printf("%d poped from stack\n", pop(&stack_a)); */
	/* printf("%d peeked from stack\n", peek(stack_a)); */
	/* printf("%d poped from stack\n", pop(&stack_a)); */
	/* printf("%zu element are in stack\n", stack_cnt(stack_a)); */
	/* printf("The last element of the stack is %d\n", stack_last(stack_a)->data); */
	/* printf("The next element of the last stack is %p\n", stack_last(stack_a)->next); */
	/* printf("%d poped from stack\n", pop(&stack_a)); */
	/* printf("%d peeked from stack\n", peek(stack_a)); */
	return (0);
}
