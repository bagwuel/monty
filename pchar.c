#include "monty.h"

/**
 * pchar - prints the ASCII value of a number
 * @top: pointer to top of stack
 * @line_number: line number of opcode
 */

void pchar(stack_t **top, unsigned int line_number)
{
	stack_t *temp;
	int value;

	if (*top == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		error_handler(top);
	}
	temp = *top;
	value = temp->n;
	if (!isprint(value))
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		error_handler(top);
	}
	putchar(value);
	putchar('\n');
}
