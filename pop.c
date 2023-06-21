#include "monty.h"

/**
 * pop - delete item at top of stack
 * @top: pointer to top of stack
 * @line_number: line number of opcode
 */

void pop(stack_t **top, unsigned int line_number)
{
	if (*top == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		error_handler(top);
	}
	delete_dnodeint_at_index(top, 0);
}
