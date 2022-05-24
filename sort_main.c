#include "push_swap.h"

void	sort_stack_two_elements(t_stack *stack_a);
void	sort_three_elements(t_stack *stack_a);
void	sort_less_equal_ten_elements(t_stack *stack_a, t_stack *stack_b);

void	do_sort(t_stack *stack_a, t_stack *stack_b)
{
	if (is_stack_sorted(stack_a))
		return ;
	if (stack_a->size == 2)
		sort_stack_two_elements(stack_a);
	else if (stack_a->size <= 10)
		sort_less_equal_ten_elements(stack_a, stack_b);
	else
		return ;
}

void	sort_stack_two_elements(t_stack *stack_a)
{
	if (!is_stack_sorted(stack_a))
		swap_a(stack_a);
}

void	sort_three_elements(t_stack *stack_a)
{
	t_stack_node	*head;
	t_stack_node	*head_next;

	head = stack_a->head;
	head_next = head->next;
	if (head->data > head_next->data && head->data > head_next->next->data)
		rotate_a(stack_a);
	if (head->data < head_next->data && head->data > head_next->next->data)
		reverse_rotate_a(stack_a);
	while (!is_stack_sorted(stack_a))
	{
		swap_a(stack_a);
		if (is_stack_sorted(stack_a))
			break ;
		if (head->data > head_next->data && head->data > head_next->next->data)
			rotate_a(stack_a);
		if (head->data < head_next->data && head->data > head_next->next->data)
			reverse_rotate_a(stack_a);
	}
}

void	sort_less_equal_ten_elements(t_stack *stack_a, t_stack *stack_b)
{
	int		min_value;
	size_t	index;

	// while (stack_a->size > 3 && !is_stack_sorted(stack_a))
	while (stack_a->size > 3)
	{
		min_value = get_min_value_in_stack(stack_a);
		index = get_index_of_key_value(stack_a, min_value);
		if (stack_a->size / 2 > index)
			while (stack_a->head->data != min_value)
				rotate_a(stack_a);
		else
			while (stack_a->head->data != min_value)
				reverse_rotate_a(stack_a);
		push_b(stack_a, stack_b);
	}
	if (!is_stack_sorted(stack_a))
		sort_three_elements(stack_a);
	while (stack_b->size > 0)
		push_a(stack_a, stack_b);
}
