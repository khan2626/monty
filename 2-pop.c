#include "monty.h"

/**
 * f_pop - it removes top element of stack
 * @top: a pointer to top element of stack
 * @count: line_number
 * Return: Nothing
 */
void pop(stack_t **top, unsigned int count)
{
  stack_t *temp;

  if (*top == NULL)
    {
      fprintf(stderr, "L%d: can't pop an empty stack\n", count);
      free(build.file);
      free(build.data);
      free_stack(*top);
      exit(EXIT_FAILURE);
    }
  temp - *top;
  *top = (*top)->next;
  free(temp);
}
