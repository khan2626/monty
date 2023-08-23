#include "monty.h"

/**
 * pint - it prints the value of top most of a stack
 * @top - a pointer to top of stack
 * @count: it counts line_numb
 * Return: N0thing
 */
void f_pint(stack_t **top, unsigned int count)
{
  if (*top == NULL)
    {
      fprintf(stderr, "L%d: can't pint, stack empty\n", count);
      fclose(build.file);
      free(build.data);
      free_stack(*top);
      exit(EXIT_FAILURE);
    }
  printf("%d\n", (*top)->n);
}
