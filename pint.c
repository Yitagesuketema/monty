#include "monty.h"
/**
 * pint - print top int
 * @stack: stack
 * @line_number: line number in monty .m file
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (tmp == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty", line_number);
		exit_free(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", tmp->n);
}
