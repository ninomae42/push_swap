#include "push_swap.h"
#include "libft.h"

static void	push(t_stack **stack1, t_stack **stack2)
{
	int		pop_data;

	if (is_empty(*stack2))
		return ;
	pop_data = pop(stack2);
	add_element(stack1, pop_data);
}

// Take the first element at the top of 'b' and put it at the top of 'a'.
void	push_a(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	ft_putendl_fd("pa", STDOUT_FILENO);
}

// Take the first element at the top of 'a' and put it at the top of 'b'.
void	push_b(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_b, stack_a);
	ft_putendl_fd("pb", STDOUT_FILENO);
}
