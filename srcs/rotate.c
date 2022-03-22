#include "push_swap.h"
#include "libft.h"

static void	rotate(t_stack **root)
{
	t_stack	*top;
	t_stack	*last;

	top = *root;
	*root = (*root)->next;
	last = stack_last(*root);
	top->next = NULL;
	last->next = top;
}

// Shift up all elements of stack 'a' by 1.
void	rotate_a(t_stack **stack_a)
{
	rotate(stack_a);
	ft_putendl_fd("ra", STDOUT_FILENO);
}

// Shift up all elements of stack 'b' by 1.
void	rotate_b(t_stack **stack_b)
{
	rotate(stack_b);
	ft_putendl_fd("rb", STDOUT_FILENO);
}

// Shift up all elements of both of stack 'a' and 'b' by 1.
void	rotate_sametime(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putendl_fd("rr", STDOUT_FILENO);
}
