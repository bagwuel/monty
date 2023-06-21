#include "monty.h"

int stack_queue = 0;

/**
 * main - driver function for monty program
 * @ac: int num of arguments
 * @av: opcode file
 * Return: 0
 */

int main(int ac, char **av)
{
	stack_t *top;

	top = NULL;
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		error_handler(&top);
	}
	read_file(av[1], &top);
	free_stack(top);
	return (0);
}
