#include "monty.h"

/**
 * push - pushes an integer unto a stack
 * @top: pointer to top of the stack
 * @line_number: line nuimber of the opcode
 */

void push(stack_t **top, unsigned int line_number)
{
	stack_t *new_node;
	char *arg;
	int push_arg;

	push_arg = 0;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		error_handler(top);
	}
	arg = strtok(NULL, "\n ");
	if (isnumber(arg) == 1 && arg != NULL)
	{
		push_arg = atoi(arg);
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		error_handler(top);
	}
	if (stack_queue == 1)
		add_dnodeint_end(top, push_arg);
	if (stack_queue == 0)
		add_dnodeint(top, push_arg);
}
