#include "push_swap.h"

size_t	stack_cnt(t_stack *root)
{
	size_t	cnt;

	cnt = 0;
	while (root != NULL)
	{
		root = root->next;
		cnt++;
	}
	return (cnt);
}

t_stack	*stack_last(t_stack *root)
{
	if (root == NULL)
		return (NULL);
	while (root->next != NULL)
		root = root->next;
	return (root);
}

t_stack	*stack_last_before_one(t_stack *root)
{
	if (root == NULL)
		return (NULL);
	while (root->next->next != NULL)
		root = root->next;
	return (root);
}
