#include "push_swap.h"

t_stack	*create_stack(void)
{
	t_stack	*stack_new;

	stack_new = (t_stack *)malloc(sizeof(t_stack));
	if (stack_new == NULL)
		exit(EXIT_FAILURE);
	stack_new->head = NULL;
	stack_new->size = 0;
	return (stack_new);
}