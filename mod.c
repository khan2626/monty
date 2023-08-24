#include "monty.h"

/**
 * m_mod - can't mul, stack too short
 * top element of the stack by the top element of the stack
 * @top: pointer to top element of the stack
 * @count: line_number
 * Return: Nothing
 */

void m_mod(stack_t **top, unsigned int count)
{
  stack_t *temp;
  int len_node, mod;

  temp = *top;
  while(temp)
    {
      temp = temp->next;
      len_node++;
    }
  if (len_node < 2)
    {
      fprintf(stderr, "L%d: can't mod, stack too short\n", count);
      fclose(build.file);
      free(build.data);
      free_stack(*top);
      exit(EXIT_FAILURE);
    }
  temp = *top;
  if (temp->n == 0)
    {
      fprintf(stderr, "L%d: ivision by zero\n", count);
      fclose(build.file);
      free(build.data);
      free_stack(*top);
      exit(EXIT_FAILURE);
    }
  mod = temp->next->n % temp->n;
  temp->next->n = mod;
  *top = temp->next;
  free(temp);
}
