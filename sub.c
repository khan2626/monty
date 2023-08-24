#include "monty.h"

/**
 * m_sub - it sbtracts the top element from the 2nd top element
 * @top: pointer to top element of stack
 * @count: line_number
 * Return: Nothing
 */

void m_sub(stack_t **top, unsigned int count)
{
  stack_t *temp;
  int res, num_nodes;

  temp = *top;
  for (num_nodes = 0; temp != NULL; num_nodes++)
    temp = temp->next;
  if (num_nodes < 2)
    {
      fprintf(stderr, "L%d: Can't sub, stack too short\n", count);
      fclose(build.file);
      free(build.data);
      exit(EXIT_FAILURE);
    }
  temp = *top;
  res = temp->next->n - temp->n;
  temp->next->n = res;
  *top = temp->next;
  free(temp);
}
  
