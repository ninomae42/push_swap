#include "push_swap.h"

static void	put_error_exit(void)
{
	ft_putstr_fd("Error\n", STDERR_FILENO);
	exit(EXIT_FAILURE);
}

static int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

static bool	is_valid_number(const char *nbr)
{
	if (*nbr == '-')
		nbr++;
	while (*nbr != '\0')
	{
		if (!ft_isdigit(*nbr))
			return (false);
		nbr++;
	}
	return (true);
}

void	setup_stack(int argc, char *argv[], t_stack *stack)
{
	size_t	i;
	int		nbr;

	if (argc == 0)
		exit(EXIT_FAILURE);
	i = argc - 1;
	while (0 < i)
	{
		if (!is_valid_number(argv[i]))
			put_error_exit();
		nbr = ft_atoi_erange(argv[i]);
		if (errno == ERANGE || find_node(stack, nbr) != NULL)
			put_error_exit();
		push_stack(stack, nbr);
		i--;
	}
}