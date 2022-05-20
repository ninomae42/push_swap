#include "push_swap.h"

/*	Shift down all elements of stack 'a' by 1.
	The last lement becomes the first one. */
void	reverse_rotate_a(t_stack *stack_a)
{
	reverse_rotate(stack_a);
	ft_putstr_fd("rra\n", STDOUT_FILENO);
}

/*	Shift down all elements of stack 'b' by 1.
	The last lement becomes the first one. */
void	reverse_rotate_b(t_stack *stack_b)
{
	reverse_rotate(stack_b);
	ft_putstr_fd("rrb\n", STDOUT_FILENO);
}

/*	reverse rotate a and b at the same time. */
void	reverse_rotate_same(t_stack *stack_a, t_stack *stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_putstr_fd("rrr\n", STDOUT_FILENO);
}
