#include "monty.h"

/**
 * m_div - divides the second top element of the stack by the top element of the stack.
 * @top: pointer to top element of stack
 * @count: line_number
 * Return: Nothing
 */

void m_div(stack_t **top, unsigned int count)
{
  stack_t *temp;
  int quotient, num_nodes;

  temp = *top;
  for (num_nodes = 0; temp != NULL; num_nodes++)
    temp = temp->next;
  if (num_nodes < 2)
    {
      fprintf(stderr, "L%d:  can't div, stack too short\n", count);
      fclose(build.file);
      free(build.data);
      free_stack(*top);
      exit(EXIT_FAILURE);
    }
  temp = *top;
  if (temp_=->n == 0)
    {
      fprintf(stderr, "L%d: division by zero\n", count);
      fclose(build.file);
      free(build.data);
      free_stack(*top);
      exit(EXIT_FAILURE);
    }
  quotient = temp->next->n / temp->n;
  temp->next->n = quotient;
  *top = temp->next;
  free(temp);
}
