#include "monty.h"

/**
 * mul - multiply top of stack and second top of stack
 * @top: pointer to top of stack
 * @line_number: line number of opcode
 */

void mul(stack_t **top, unsigned int line_number)
{
	if (*top == NULL || (*top)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		error_handler(top);
	}
	(*top)->next->n *= (*top)->n;
	pop(top, line_number);
}
