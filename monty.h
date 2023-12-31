#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

extern int stack_queue;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcoode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

typedef void (*instruct_func)(stack_t **stack, unsigned int line_number);
char *get_opcode(char *str);
instruct_func get_command_function(char *command);
void error_handler(stack_t **top);
void free_stack(stack_t *top);
void read_file(char *filename, stack_t **top);
void pall(stack_t **top, unsigned int line_number);
void swap(stack_t **top, unsigned int line_number);
void nop(stack_t **top, unsigned int line_number);
void pchar(stack_t **top, unsigned int line_number);
void pint(stack_t **top, unsigned int line_number);
void push(stack_t **top, unsigned int line_number);
void pop(stack_t **top, unsigned int line_number);
void add(stack_t **top, unsigned int line_number);
void sub(stack_t **top, unsigned int line_number);
void mul(stack_t **top, unsigned int line_number);
void _div(stack_t **top, unsigned int line_number);
void pstr(stack_t **top, unsigned int line_number);
void mod(stack_t **top, unsigned int line_number);
void rotl(stack_t **top, unsigned int line_number);
void rotr(stack_t **top, unsigned int line_number);
void queue(stack_t **top, unsigned int line_number);
void stack(stack_t **top, unsigned int line_number);
stack_t *add_dnodeint_end(stack_t **top, const int n);
stack_t *add_dnodeint(stack_t **top, const int n);
int delete_dnodeint_at_index(stack_t **top, unsigned int index);
int isnumber(char *str);
#endif
