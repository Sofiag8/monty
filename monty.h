#ifndef _MONTY_H
#define _MONTY_H

#include <stdio.h> /* stderr, stdin, and stdout, printf, FILE, fclose */
#include <string.h> /* string manipulation, strtok */
#include <stdlib.h> /* size_T, exit status, atoi, free, malloc */
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h> /* access */
#include <fcntl.h> /* open */

extern int global_var;
int global_var;

/* given structures */
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/* interpreter funciontions */
void read_file(char *file_name);
void free_stack(stack_t **stack);
char **tokenize(char *buffer);
int check_args(char *tk);
void (*op_functions(char **tks, unsigned int ln))(stack_t **, unsigned int);
void handler_errors(unsigned int line_number, int type_err);

/* opcode functions */
void pall_func(stack_t **stack, unsigned int line_number);
void push_func(stack_t **stack, unsigned int line_number);
void pint_func(stack_t **stack, unsigned int line_number);
void pop_func(stack_t **stack, unsigned int line_number);

#endif