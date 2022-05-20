#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_stack_node {
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
	int					data;
}	t_stack_node;

typedef struct s_stack {
	t_stack_node	*head;
	size_t			size;
}	t_stack;

t_stack			*create_stack(void);

#endif