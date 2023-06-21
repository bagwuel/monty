#include "monty.h"

/**
 * read_file - reads monty bytecode file and runs
 * the corresponding commands
 * @filename: file to be read
 * @top: pointer to top of stack
 */

void read_file(char *filename, stack_t **top)
{
	char *buffer = NULL;
	char *opcode;
	size_t i = 0;
	int line_number = 1;
	instruct_func command;
	int check;
	int read;
	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		error_handler(top);
	}
	while ((read = getline(&buffer, &i, file)) != -1)
	{
		opcode = get_opcode(buffer);
		if (opcode == NULL || opcode[0] == '#')
		{
			line_number++;
			continue;
		}
		command = get_command_function(opcode);
		if (command == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
			error_handler(top);
		}
		command(top, line_number);
		line_number++;
	}
	free(buffer);
	check = fclose(file);
	if (check == -1)
		exit(-1);
}
