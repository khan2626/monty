#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdlib.h>
#include <sys/types.h>
#include <ctype.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct build_s - it has variables(ag, file, line number
 * @ag: argument parameter
 * @file: pointer to monty
 * @data: line_number
 * @l: flag
 * Description: it holds values
 */
typedef struct build_s
{
  FILE *file;
  char *ag;
  char *data;
  int l;
}build_t;
extern build_t build;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void m_add(stack_t **top, unsigned int count);
void m_push(stack_t **top, unsigned int count);
void m_swap(stack_t **top, unsigned int count);
void m_pop(stack_t **top, unsigned int count);
void m_pint(stack_t **top, unsigned int count);
void m_pall(stack_t **top, unsigned int count);
void m_nop(stack_t **head, unsigned int count);
void addqueue(stack_t **top, unsigned int n);
void free_stack(stack_t *top);
void addnode(stack_t **top, int n);
int execute(char *data, stack_t **stack, unsigned int count, FILE *file);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
void m_sub(stack_t **top, unsigned int count);
void m_div(stack_t **top, unsigned int count);
void m_mul(stack_t **top, unsigned int count);
void m_mod(stack_t **top, unsigned int count);
void m_pchar(stack_t **top, unsigned int count);
void m_pstr(stack_t **top, unsigned int count);
void m_rotl(stack_t **top, unsigned int count);
void m_rotr(stack_t **top, unsigned int count);

#endif
