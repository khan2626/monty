#include "monty.h"

/**
 * m_swap - it swaps the first two element of stack
 * @top: pointer to top element of stack
 * @count: line_number
 * Return: Nothing
 */
void m_swap(stack_t **top, unsigned int count)
{
  int temp, length = 0;
  stack_t *h;

  h = *top;
  while (h)
    {
      h = h->next;
      length++;
    }
  if (length < 2)
    {
      fprintf(stderr, "L%d: an't swap, stack too short\n", count);
      free(build.file);
      free(build.data);
      free_stack(*top);
      exit(EXIT_FAILURE);
    }
  h = *top;
  temp = h->n;
  h->n = h->next->n;
  h->next->n = temp;
}
