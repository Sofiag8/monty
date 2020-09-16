#include "monty.h"
/**
 * read_file - reads the file passed to the monty interpreter
 * @file_name: pointer to the file passed to the monty interpreter
 * Return: void
 */
void read_file(char *file_name)
{
	stack_t *stack = NULL;
	int line_number = 0;
	char **tokens;
	char *buffer = NULL;
	size_t size = 0;
	/* object type for storing information for a file stream */
	FILE *file_data;

	file_data = fopen(file_name, "r");
	if (file_data == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file_name);
		exit(EXIT_FAILURE);

	}
	while (-1 != getline(&buffer, &size, file_data))
	{
		line_number++;
		tokens = tokenize(buffer);
		if (tokens == NULL)
			continue;
		else
			op_functions(tokens, line_number)(&stack, line_number);
	}
	fclose(file_data);
	free(buffer);
	free_stack(&stack);
}
