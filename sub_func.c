#include "monty.h"
/**
 * sub_func - substracts the top element of the stack from the second top elem
 * add_func - adds to the top two elements of the stack
 * @stack: double pointer to a double linked list as stack
 * @line_number: number of lines inside the opcode file
 * Return: void
 */
void sub_func(stack_t **stack, unsigned int line_number)
{
	stack_t *aux_stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		handler_errors(line_number, 6);
	}
	aux_stack = *stack;
	if (aux_stack->next == NULL)
		handler_errors(line_number, 6);
	aux_stack->next->n -= (*stack)->n;
	*stack = (*stack)->next;
	free(aux_stack);
	(*stack)->prev = NULL;
}
