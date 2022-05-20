#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <errno.h>
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

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

// stack_utils.c
t_stack_node	*find_node(t_stack *stack, int key);

// operation_base.c
void			swap(t_stack *stack);
void			push(t_stack *stack1, t_stack *stack2);
void			rotate(t_stack *stack);
void			reverse_rotate(t_stack *stack);

// operation1.c
void			swap_a(t_stack *stack_a);
void			swap_b(t_stack *stack_b);
void			swap_sametime(t_stack *stack_a, t_stack *stack_b);
void			push_a(t_stack *stack_a, t_stack *stack_b);
void			push_b(t_stack *stack_a, t_stack *stack_b);

// operation2.c
void			rotate_a(t_stack *stack_a);
void			rotate_b(t_stack *stack_b);
void			rotate_sametime(t_stack *stack_a, t_stack *stack_b);

// operation3.c
void			reverse_rotate_a(t_stack *stack_a);
void			reverse_rotate_b(t_stack *stack_b);
void			reverse_rotate_same(t_stack *stack_a, t_stack *stack_b);

// ft_putstr_fd.c
size_t			ft_strlen(const char *s);
void			ft_putstr_fd(const char *s, int fd);

// atoi_erange.c
int				ft_atoi_erange(const char *nptr);

// initializer.c
void			setup_stack(int argc, char *argv[], t_stack *stack);

#endif