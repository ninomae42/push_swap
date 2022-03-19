#include "push_swap.h"

void	swap(t_stack **root)
{
	t_stack	*tmp;
	t_stack	*tmp_next;

	tmp = *root;
	*root = (*root)->next;
	tmp_next = (*root)->next;
	tmp->next = tmp_next;
	(*root)->next = tmp;
}

void	swap_sametime(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
}

void	rotate(t_stack **root)
{
	t_stack	*top;
	t_stack	*last;

	top = *root;
	*root = (*root)->next;
	last = stack_last(*root);
	top->next = NULL;
	last->next = top;
}

void	rotate_sametime(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}
