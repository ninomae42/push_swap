#include "push_swap.h"

t_stack	*new_node(int data)
{
	t_stack	*node_new;

	node_new = (t_stack *)malloc(sizeof(t_stack) * 1);
	if (node_new == NULL)
		return (NULL);
	node_new->data = data;
	node_new->next = NULL;
	return (node_new);
}

bool	is_empty(t_stack *root)
{
	if (root == NULL)
		return (true);
	return (false);
}

void	add_element(t_stack **root, int data)
{
	t_stack	*node_new;

	node_new = new_node(data);
	if (node_new == NULL)
		return ;
	node_new->next = *root;
	*root = node_new;
	printf("%d pushed to stack\n", data);
}

int	pop(t_stack **root)
{
	t_stack	*tmp;
	int		pop_data;

	if (is_empty(*root))
		return (INT_MIN);
	tmp = *root;
	*root = (*root)->next;
	pop_data = tmp->data;
	free(tmp);
	return (pop_data);
}

int	peek(t_stack *root)
{
	if (is_empty(root))
		return (INT_MIN);
	return (root->data);
}
