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

int	get_min_value_in_stack(t_stack *stack_a)
{
	t_stack_node	*current;
	int				ret;

	current = stack_a->head;
	ret = INT_MAX;
	while (current != NULL)
	{
		if (current->data < ret)
			ret = current->data;
		current = current->next;
	}
	return (ret);
}

size_t	get_index_of_key_value(t_stack *stack_a, int key)
{
	t_stack_node	*current;
	size_t			index;

	current = stack_a->head;
	index = 0;
	while (current != NULL)
	{
		if (current->data == key)
			return (index);
		index++;
		current = current->next;
	}
	return (0);
}
