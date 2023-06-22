#include "monty.h"

/**
 * rotr - rotates the list right
 * @top: pointer to top of stack
 * @line_number: line number of opcode
 */

void rotr(stack_t **top, __attribute__ ((unused))unsigned int line_number)
{
	stack_t *tmp_pointer1, *tmp_pointer2;
	int temp1, temp2;

	if (*top == NULL)
		return;
	tmp_pointer1 = *top;
	tmp_pointer2 = *top;
	while (tmp_pointer1->next)
		tmp_pointer1 = tmp_pointer1->next;
	while (tmp_pointer2)
	{
		if (tmp_pointer2->prev == NULL)
		{
			temp1 = tmp_pointer2->n;
			tmp_pointer2->n = tmp_pointer1->n;
		}
		else
		{
			temp2 = tmp_pointer2->n;
			tmp_pointer2->n = temp1;
			temp1 = temp2;
		}
		tmp_pointer2 = tmp_pointer2->next;
	}
}
