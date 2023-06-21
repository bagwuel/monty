#include "monty.h"

/**
 * pint - print int a top of stack
 * @top: pointer to top of stack
 * @line_number: line number of opcode
 */

void pint(stack_t **top, unsigned int line_number)
{
	stack_t *temp;

	temp = *top;
	if (temp == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		error_handler(top);
	}
	printf("%d\n", temp->n);
}
