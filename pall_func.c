#include "monty.h"
/**
 * pall_func - prints all the values of the stack starting from the top
 * @stack: double pointer to a double linked list as stack
 * @line_number: number of lines inside the opcode file
 * Return: void
 */
void pall_func(stack_t **stack, unsigned int line_number)
{
	const stack_t *aux_stack;
	(void) line_number;

	if (stack == NULL)
		exit(EXIT_FAILURE);
	aux_stack = *stack;
	while (aux_stack != NULL)
	{
		fprintf(stdout, "%d\n", aux_stack->n);
		aux_stack = aux_stack->next;
	}
}
