#include "push_swap.h"

bool	is_stack_sorted(t_stack *stack)
{
	t_stack_node	*current;
	t_stack_node	*current_next;

	if (stack->size < 2)
		return (true);
	current = stack->head;

	while (current != NULL)
	{
		current_next = current->next;
		if (current_next != NULL)
			if (current->data > current_next->data)
				return (false);
		current = current->next;
	}
	return (true);
}
