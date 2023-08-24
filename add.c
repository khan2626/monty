#include "monty.h"

/**
 * add - it adds the top two element of stack
 * @top: pointer to the top of the stack
 * @count: line_number
 * Return: Nothing
 */
void add(stack_t **top, unsigned int count)
{
  int sum, length = 0;
  stack_t *h = *top;

  while (h)
    {
      h = h->next;
      length++;
    }
  if (length < 2)
    {
      fprintf(stderr, "L%d: can't add, stack too short\n", count);
      free(build.file);
      free(build.data);
      free_stack(*top);
      exit(EXIT_FAILURE);
    }
  h = *top;
  sum = h->n + h->next->n;
  h->next->n = sum;
  *top = h->next;
  free(h);
}

  
  
