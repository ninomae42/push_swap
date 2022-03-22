#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdbool.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_stack {
	int				data;
	struct s_stack	*next;
}	t_stack;

/* stack_node.c */
t_stack	*new_node(int data);
bool	is_empty(t_stack *root);
void	add_element(t_stack **root, int data);
int		pop(t_stack **root);
int		peek(t_stack *root);

/* stack_utils.c */
size_t	stack_cnt(t_stack *root);
t_stack	*stack_last(t_stack *root);
t_stack	*stack_last_before_one(t_stack *root);

/* swap.c */
void	swap_a(t_stack **stack_a);
void	swap_b(t_stack **stack_b);
void	swap_sametime(t_stack **stack_a, t_stack **stack_b);

/* push.c */
void	push_a(t_stack **stack_a, t_stack **stack_b);
void	push_b(t_stack **stack_a, t_stack **stack_b);

/* rotate.c */
void	rotate_a(t_stack **stack_a);
void	rotate_b(t_stack **stack_b);
void	rotate_sametime(t_stack **stack_a, t_stack **stack_b);

/* reverse_rotate.c */
void	reverse_rotate_a(t_stack **stack_a);
void	reverse_rotate_b(t_stack **stack_b);
void	reverse_rotate_sametime(t_stack **stack_a, t_stack **stack_b);

#endif
