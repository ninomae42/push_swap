#include "push_swap.h"

void	push(t_stack **stack1, t_stack **stack2)
{
	int		pop_data;

	if (is_empty(*stack2))
		return ;
	pop_data = pop(stack2);
	add_element(stack1, pop_data);
}

void	reverse_rotate(t_stack **root)
{
	t_stack	*last;
	t_stack	*last_before_one;

	last = stack_last(*root);
	last_before_one = stack_last_before_one(*root);
	last_before_one->next = NULL;
	last->next = *root;
	*root = last;
}

void	reverse_rotate_sametime(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
}
