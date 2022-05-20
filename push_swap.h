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

// stack_main.c
t_stack			*create_stack(void);
void			push_stack(t_stack *stack, int value);
int				pop_stack(t_stack *stack);
void			print_stack(t_stack *stack);
t_stack_node	*stack_last(t_stack *stack);

// operation_base.c
void			swap(t_stack *stack);
void			push(t_stack *stack1, t_stack *stack2);
void			rotate(t_stack *stack);
void			reverse_rotate(t_stack *stack);

#endif