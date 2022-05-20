#include "push_swap.h"

static void	sort_stack_a_with_two(t_stack *stack_a);
static void	sort_stack_b_with_two(t_stack *stack_b);
static void	sort_stack_a_with_three(t_stack *stack_a);
static void	sort_stack_b_with_three(t_stack *stack_b);

void	do_sort(t_stack *stack_a, t_stack *stack_b)
{
	if (is_stack_sorted(stack_a))
		return ;
	if (stack_a->size == 2)
		sort_stack_a_with_two(stack_a);
	else if (stack_a->size == 3)
		sort_stack_a_with_three(stack_a);
}

static void	sort_stack_a_with_two(t_stack *stack_a)
{
	if (!is_stack_sorted(stack_a))
		swap_a(stack_a);
}

static void	sort_stack_b_with_two(t_stack *stack_b)
{
	if (!is_stack_sorted(stack_b))
		swap_b(stack_b);
}

static void	sort_stack_a_with_three(t_stack *stack_a)
{
	while (!is_stack_sorted(stack_a))
	{
		swap_a(stack_a);
		if (is_stack_sorted(stack_a))
			return ;
		reverse_rotate_a(stack_a);
		if (is_stack_sorted(stack_a))
			return ;
		reverse_rotate_a(stack_a);
		if (is_stack_sorted(stack_a))
			return ;
	}
}

static void	sort_stack_b_with_three(t_stack *stack_b)
{
	while (!is_stack_sorted(stack_b))
	{
		swap_b(stack_b);
		if (is_stack_sorted(stack_b))
			return ;
		reverse_rotate_b(stack_b);
		if (is_stack_sorted(stack_b))
			return ;
		reverse_rotate_b(stack_b);
		if (is_stack_sorted(stack_b))
			return ;
	}
}
