#include "monty.h"

/**
 * pstr - print string starting a top of stack
 * @top: pointer to top stack
 * @line_number: line number of opcode
 */

void pstr(stack_t **top, __attribute__ ((unused))unsigned int line_number)
{
	stack_t *temp;
	int value;

	temp = *top;
	while (temp != NULL)
	{
		value = temp->n;
		if (value == 0)
			break;
		if (!isprint(value))
			break;
		putchar(value);
		temp = temp->next;
	}
	putchar('\n');
}
