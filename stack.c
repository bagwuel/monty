#include "monty.h"

/**
 * stack - sets stack_queue flag to stack
 * @top: pointer to top of stack
 * @line_number: line number of opcode
 */

void stack(stack_t **top, unsigned int line_number)
{
	(void)top;
	(void)line_number;

	stack_queue = 0;
}
