#include "push_swap.h"

/*	Swap the first 2 elements at the top of stack 'a'.
	Do nothing if there is only one or no elements. */
void	swap_a(t_stack *stack_a)
{
	swap(stack_a);
	ft_putstr("sa\n", STDOUT_FILENO);
}

/*	Swap the first 2 elements at the top of stack 'b'.
	Do nothing if there is only one or no elements. */
void	swap_b(t_stack *stack_b)
{
	swap(stack_b);
	ft_putstr("sb\n", STDOUT_FILENO);
}

/*	'swap_a' and 'swap_b' at the same time. */
void	swap_sametime(t_stack *stack_a, t_stack *stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_putstr("ss\n", STDOUT_FILENO);
}

/*	Take the first element at the top of stack_b
	and put it at the top of stack_a.
	Do nothing if stack_b is empty. */
void	push_a(t_stack *stack_a, t_stack *stack_b)
{
	push(stack_a, stack_b);
	ft_putstr("pa\n", STDOUT_FILENO);
}

/*	Take the first element at the top of stack_a
	and put it at the top of stack_b.
	Do nothing if stack_a is empty. */
void	push_b(t_stack *stack_a, t_stack *stack_b)
{
	push(stack_b, stack_a);
	ft_putstr("pb\n", STDOUT_FILENO);
}
