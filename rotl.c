#include "monty.h"

/**
 * rotl - rotates the list left
 * @top: pointer to top of stack
 * @line_number: line number of opcode
 */

void rotl(stack_t **top, __attribute__ ((unused))unsigned int line_number)
{
	stack_t *tmp_pointer;
	int temp1, temp2;

	if (*top == NULL)
		return;
	tmp_pointer = *top;
	while (tmp_pointer->next)
		tmp_pointer = tmp_pointer->next;
	while (tmp_pointer)
	{
		if (!tmp_pointer->next)
		{
			temp1 = tmp_pointer->n;
			tmp_pointer->n = (*top)->n;
		}
		else
		{
			temp2 = tmp_pointer->n;
			tmp_pointer->n = temp1;
			temp1 = temp2;
		}
		tmp_pointer = tmp_pointer->prev;
	}
}
