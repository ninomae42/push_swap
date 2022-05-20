#include "push_swap.h"

// create stack instance. If allocation fails, then exit with status(EXIT_FAILURE)
t_stack	*create_stack(void)
{
	t_stack	*stack_new;

	stack_new = (t_stack *)malloc(sizeof(t_stack));
	if (stack_new == NULL)
		exit(EXIT_FAILURE);
	stack_new->head = NULL;
	stack_new->size = 0;
	return (stack_new);
}

// push the element to the stack. If allocation fails, then exit with status(EXIT_FAILURE)
void	push_stack(t_stack *stack, int value)
{
	t_stack_node	*new_node;

	new_node = (t_stack_node *)malloc(sizeof(t_stack_node));
	if (new_node == NULL)
		exit(EXIT_FAILURE);
	new_node->data = value;
	new_node->prev = NULL;
	new_node->next = stack->head;
	if (0 < stack->size)
		stack->head->prev = new_node;
	stack->head = new_node;
	stack->size += 1;
}

// pop stack top value from a stack. Also frees the stack top element.
int	pop_stack(t_stack *stack)
{
	t_stack_node	*head;
	t_stack_node	*head_next;
	int				ret;

	if (0 < stack->size)
	{
		head = stack->head;
		head_next = head->next;
		ret = head->data;
		free(head);

		if (head_next != NULL)
			head_next->prev = NULL;
		head = head_next;
		stack->head = head;
		stack->size -= 1;
		return (ret);
	}
}

/*	prints stack general information(pointer of head, size of stack) and
	information of each node(value, prev pointer, current pointer, next pointer)*/
void	print_stack(t_stack *stack)
{
	t_stack_node	*current;

	printf("stack_head: %p, stack_size: %zu\n", stack->head, stack->size);
	current = stack->head;
	while (current != NULL)
	{
		printf("data: %d, prev: %p, current: %p, next: %p\n", current->data, current->prev, current, current->next);
		current = current->next;
	}
}

// Find the last node of the stack.
t_stack_node *stack_last(t_stack *stack)
{
	t_stack_node	*current;

	current = stack->head;
	while (current != NULL && current->next != NULL)
	{
		current = current->next;
	}
	return (current);
}