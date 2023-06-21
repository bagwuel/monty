#include "monty.h"

/**
 * pall - print the content of a stack
 * @top: pointer to top of stack
 * @line_number: line number of opcode
 */

void pall(stack_t **top, __attribute__ ((unused))unsigned int line_number)
{
	stack_t *temp;

	temp = *top;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
