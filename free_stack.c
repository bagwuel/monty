#include "monty.h"

/**
 * free_stack - free a stack
 * @top: pointer to top of stack
 */

void free_stack(stack_t *top)
{
	stack_t *tmp;

	while (top != NULL)
	{
		tmp = top->next;
		free(top);
		top = tmp;
	}
}
