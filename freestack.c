#include "monty.h"

/**
 * free_stack - if frees memory in stack
 * @top: pointer to first element of stack
 */

void free_stack(stack_t *top)
{
  stack_t *temp;

  temp = top;
  while (top)
    {
      temp = top->next;
      free(top);
      top = temp;
    }
}
