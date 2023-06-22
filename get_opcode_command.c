#include "monty.h"

/**
 * get_command_function -  returns the correct function
 * for the opcode command
 * @command: the opcode command
 *
 * Return: returns a function if command is found, or NULL on failure
 */

instruct_func  get_command_function(char *command)
{
	int i = 0;
	instruction_t instruct[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"pchar", pchar},
		{"add", add},
		{"sub", sub},
		{"mul", mul},
		{"div", _div},
		{"mod", mod},
		{"nop", nop},
		{"rotl", rotl},
		{"rotr", rotr},
		{"pstr", pstr},
		{"stack", stack},
		{"queue", queue},
		{NULL, NULL},
	};
	while (instruct[i].f != NULL && strcmp(instruct[i].opcode, command) != 0)
		i++;
	return (instruct[i].f);
}
