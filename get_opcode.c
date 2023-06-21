#include "monty.h"

/**
 * get_opcode - tokenize a string for opcode and args
 * @str: string to be tokenized
 *
 * Return: return opcode if found, null on failure
 */

char *get_opcode(char *str)
{
	char *opcode;

	opcode = strtok(str, "\n ");
	if (opcode == NULL)
		return (NULL);
	return (opcode);
}
