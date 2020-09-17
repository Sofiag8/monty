#include "monty.h"
/**
 * pint_func - prints the value at the top of the stack
 * @stack: double pointer to the beggining of the stack (DLL)
 * @line_number: the numbers of lines in the opcode file
 * Return: void
 */
void pint_func(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		handler_errors(line_number, 4);
	}
	fprintf(stdout, "%d\n", (*stack)->n);
}
