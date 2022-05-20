#include "push_swap.h"

/*	find the key value in the stack node.
	If key is found in the stack node, returns the address to the key.
	If not, returns NULL. */
t_stack_node	*find_node(t_stack *stack, int key)
{
	t_stack_node	*current;

	current = stack->head;
	while (current != NULL)
	{
		if (current->data == key)
			return (current);
		current = current->next;
	}
	return (NULL);
}