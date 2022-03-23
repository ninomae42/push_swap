#include "push_swap.h"
#include "libft.h"
#define ERR_MSG "Error"

void	put_error(char *err_msg)
{
	ft_putendl_fd(err_msg, STDERR_FILENO);
}

bool	is_sorted(t_stack *stack)
{
	bool	sorted;

	sorted = true;
	while (stack != NULL)
	{
		if (stack->next != NULL && stack->data > (stack->next)->data)
		{
			sorted = false;
			break ;
		}
		stack = stack->next;
	}
	return (sorted);
}

void	do_sorting(t_stack **stack_a)
{
	while (!is_sorted(*stack_a))
	{
		if ((*stack_a)->data > (*stack_a)->next->data)
			swap_a(stack_a);
	}
}

void	print_stack_element(t_stack *stack)
{
	printf("----- stack start -----\n");
	while (stack != NULL)
	{
		printf("%d\n", stack->data);
		stack = stack->next;
	}
	printf("----- stack end -----\n");
}

int	main(int argc, char *argv[])
{
	t_stack		*stack_a;
	size_t		i;

	if (argc < 2)
		return (1);
	stack_a = NULL;
	i = (size_t)argc - 1;
	while (0 < i)
	{
		add_element(&stack_a, ft_atoi(argv[i]));
		i--;
	}
	print_stack_element(stack_a);
	do_sorting(&stack_a);
	print_stack_element(stack_a);
	while (stack_a != NULL)
	{
		printf("%d poped from stack\n", pop(&stack_a));
	}
	return (0);
}
