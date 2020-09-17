#include "monty.h"
/**
 * pop_func - removes the top element of the stack
 * @stack: double pointer to the beggining of the stack (DLL)
 * @line_number: number of lines in the opcode file
 * Return: void
 */
void pop_func(stack_t **stack, unsigned int line_number)
{
	stack_t *aux_stack;

	if (*stack == NULL)
		handler_errors(line_number, 1);

	if ((*stack)->next == NULL)
	{
		free(*stack);
		*stack = NULL;
	}
	else
	{
		aux_stack = (*stack)->next;
		(*stack) = aux_stack;
		aux_stack = aux_stack->prev;
		(*stack)->prev = NULL;
		free(aux_stack);
	}
}
