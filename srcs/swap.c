#include "push_swap.h"
#include "libft.h"

static void	swap(t_stack **root)
{
	t_stack	*tmp;
	t_stack	*tmp_next;

	tmp = *root;
	*root = (*root)->next;
	tmp_next = (*root)->next;
	tmp->next = tmp_next;
	(*root)->next = tmp;
}

// Swap the first 2 elements at the top of stack 'a'.
void	swap_a(t_stack **stack_a)
{
	swap(stack_a);
	ft_putendl_fd("sa", STDOUT_FILENO);
}

// Swap the first 2 elements at the top of stack 'b'.
void	swap_b(t_stack **stack_b)
{
	swap(stack_b);
	ft_putendl_fd("sb", STDOUT_FILENO);
}

// Swap the first 2 elements at the top of stack both 'a' and 'b'.
void	swap_sametime(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_putendl_fd("ss", STDOUT_FILENO);
}
