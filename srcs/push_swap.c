#include "push_swap.h"
#include "libft.h"
#define ERR_MSG "Error"

void	put_error(char *err_msg)
{
	ft_putendl_fd(err_msg, STDERR_FILENO);
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
	while (stack_a != NULL)
	{
		printf("%d poped from stack\n", pop(&stack_a));
	}
	return (0);
}
