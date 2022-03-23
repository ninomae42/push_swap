#include "push_swap.h"
#include "libft.h"

static void	reverse_rotate(t_stack **root)
{
	t_stack	*last;
	t_stack	*last_before_one;

	if (root == NULL || stack_cnt(*root) < 2)
		return ;
	last = stack_last(*root);
	last_before_one = stack_last_before_one(*root);
	last_before_one->next = NULL;
	last->next = *root;
	*root = last;
}

// Shift down all elements of stack 'a' by 1.
void	reverse_rotate_a(t_stack **stack_a)
{
	reverse_rotate(stack_a);
	ft_putendl_fd("rra", STDOUT_FILENO);
}

// Shift down all elements of stack 'b' by 1.
void	reverse_rotate_b(t_stack **stack_b)
{
	reverse_rotate(stack_b);
	ft_putendl_fd("rrb", STDOUT_FILENO);
}

// Shift down all elements of both of stack 'a' and 'b' by 1.
void	reverse_rotate_sametime(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_putendl_fd("rrr", STDOUT_FILENO);
}
