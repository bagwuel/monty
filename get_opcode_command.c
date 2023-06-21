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
		{NULL, NULL},
	};
	while (instruct[i].f != NULL && strcmp(instruct[i].opcode, command) != 0)
		i++;
	return (instruct[i].f);
}
