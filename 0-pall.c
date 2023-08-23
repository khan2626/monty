#include "monty.h"

/**
 * f_pall - it prints all values in a stack
 * @top: pointer to struct stack_s
 * @count: unused
 * Return: no return
 */
void f_pall(stack_t **top, unsigned int count)
{
  stack *temp;
  (void)count;

  temp = *top;

  if (*top == NULL)
    return;
  while (temp != NULL)
    {
      printf("%d\n", temp->n);
      temp = temp-next;
    }
}
