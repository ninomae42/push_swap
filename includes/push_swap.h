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

/* operation.c */
void	swap(t_stack **root);
void	swap_sametime(t_stack **stack_a, t_stack **stack_b);
void	rotate(t_stack **root);
void	rotate_sametime(t_stack **stack_a, t_stack **stack_b);

/* operation2.c */
void	push(t_stack **stack1, t_stack **stack2);
void	reverse_rotate(t_stack **root);
void	reverse_rotate_sametime(t_stack **stack_a, t_stack **stack_b);

#endif
