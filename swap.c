#include "monty.h"

/**
 * swap - swap top of stack and second top of stack
 * @top: pointer to top of stack
 * @line_number: line number of opcode
 */

void swap(stack_t **top, unsigned int line_number)
{
	stack_t *temp;
	int temp_top;

	temp = *top;
	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		error_handler(top);
	}
	temp_top = temp->n;
	temp->n = temp->next->n;
	temp->next->n = temp_top;
}
