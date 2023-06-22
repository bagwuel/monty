#include "monty.h"

/**
 * queue - sets stack_queue flag to queue
 * @top: pointer to top of stack
 * @line_number: line number of opcode
 */

void queue(stack_t **top, unsigned int line_number)
{
	(void)top;
	(void)line_number;

	stack_queue = 1;
}
