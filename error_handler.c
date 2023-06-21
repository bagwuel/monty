#include "monty.h"

/**
 * error_handler - frees non empty stack and exits failure
 * @top: pointer to top of stack
 */

void error_handler(stack_t **top)
{
	if (*top)
		free_stack(*top);
	exit(EXIT_FAILURE);
}
