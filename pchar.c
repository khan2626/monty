#include "monty.h"

/**
 * m_pchar -  prints the char at the top of the stack
 * @top: pointer to top element of the stack
 * @count: line_number
 * Return: Nothing
 */

void m_pchar(stack_t **top, unsigned int count)
{
  stack_t *temp;

  temp = *top;
  if (!temp)
    {
      fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
      fclose(build.file);
      free(build.data);
      free_stack(*top);
      exit(EXIT_FAILURE);
    }
  if (temp->n > 127 || temp->n < 0)
    {
      fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
      fclose(build.file);
      free(build.data);
      free_stack(*top);
      exit(EXIT_FAILURE);
    }
  printf("%c\n", temp->n);
}
