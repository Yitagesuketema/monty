#include "monty.h"
/**
 * pop - removes top item from stack
 * @stack: stack
 * @line_number: monty file line number
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (tmp == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit_free(*stack);
		exit(EXIT_FAILURE);
	}
	if (tmp->next == NULL)
	{
		free(*stack);
		*stack = NULL;
	}
	else
	{
		(*stack) = (*stack)->next;
		(*stack)->prev = NULL;
		free(tmp);
	}
}