#include "push_swap.h"

/*	Shift up all elements of stack 'a' by 1.
	The first element becomes the last one. */
void	rotate_a(t_stack *stack_a)
{
	rotate(stack_a);
	ft_putstr_fd("ra\n", STDOUT_FILENO);
}

/*	Shift up all elements of stack 'b' by 1.
	The first element becomes the last one. */
void	rotate_b(t_stack *stack_b)
{
	rotate(stack_b);
	ft_putstr_fd("rb\n", STDOUT_FILENO);
}

/*	rotate_a and rotate_b at the sametime. */
void	rotate_sametime(t_stack *stack_a, t_stack *stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putstr_fd("rr\n", STDOUT_FILENO);
}
