#include "monty.h"
/**
 * handler_errors - manage errors due problems with program reading
 * @line_number: number of lines in the opcode file
 * @type_err: number passed depending to the error type
 * Return: void
 */
void handler_errors(unsigned int line_number, int type_err)
{
	if (type_err == 1)
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	else if (type_err == 2)
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
}
