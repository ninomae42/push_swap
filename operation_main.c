#include "push_swap.h"

/*	Swap the first 2 elements at the top of stack.
	Do nothing if there is only one or no elements. */
void	swap(t_stack *stack)
{
	t_stack_node	*head;
	int				tmp;

	if (stack->size < 2)
		return ;
	head = stack->head;
	tmp = head->data;
	head->data = head->next->data;
	head->next->data = tmp;
}

/*	Take the first element at the top of stack_2
	and put it at the top of stack_1.
	Do nothing if stack_2 is empty. */
void	push(t_stack *stack_1, t_stack *stack_2)
{
	int				tmp;

	if (stack_2->size == 0)
		return ;
	tmp = pop_stack(stack_2);
	push_stack(stack_1, tmp);
}

/*	Shift up all elements of stack by 1.
	The first element becomes the last one. */
void	rotate(t_stack *stack)
{
	t_stack_node	*head;
	t_stack_node	*head_next;
	t_stack_node	*last;

	if (stack->size < 2)
		return ;
	head = stack->head;
	head_next = head->next;
	last = stack_last(stack);
	head_next->prev = NULL;
	stack->head = head_next;
	head->prev = last;
	head->next = NULL;
	last->next = head;
}

/*	Shift down all elements of stack by 1.
	The last lement becomes the first one. */
void	reverse_rotate(t_stack *stack)
{
	t_stack_node	*head;
	t_stack_node	*last;
	t_stack_node	*last_prev;

	if (stack->size < 2)
		return ;
	head = stack->head;
	last = stack_last(stack);
	last_prev = last->prev;
	last->prev = NULL;
	last->next = head;
	head->prev = last;
	last_prev -> next = NULL;
	stack->head = last;
}
