#include "monty.h"

/**
 * _div - divide top of stack and second top of stack
 * @top: pointer to top of stack
 * @line_number: line number of opcode
 */

void _div(stack_t **top, unsigned int line_number)
{
	if (*top == NULL || (*top)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		error_handler(top);
	}
	if ((*top)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		error_handler(top);
	}
	(*top)->next->n /= (*top)->n;
	pop(top, line_number);
}
