#include "monty.h"

/**
 * m_mul - multiplies the second top element of the stack with the top element of the stack.
 * @top: pointer to top element of the stack
 * @count: line_number
 * Return: Nothing
 */

void m_mul(stack_t **top, unsigned int count)
{
  stack_t *temp;
  int len_node, prod;

  temp = *top;
  while (temp)
    {
      temp = temp->next;
      len_node++;
    }
  if (len_node < 2)
    {
      fprintf(stderr, "L%d: can't mul, stack too short\n", count);
      fclose(build.file);
      free(build.data);
      free_stack(*top);
      exit(EXIT_FAILURE);
    }
  temp = *top;
  prod = temp->next->n * temp->n;
  temp->next->n = prod;
  *top = temp->next;
  free(temp);
}
      
