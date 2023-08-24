#include "monty.h"

/**
 * m_pstr - prints the string starting at the top of the stack
 * @top: pointer to the top of the stack
 * @count: line_number
 * Return: Nothing
 */

void m_pstr(stack_t **top, unsigned int count)
{
  stack_t *temp;
  (void)count;

  temp = *top;
  while (temp)
    {
      if (temp->n > 127 || temp->n <= 0)
	{
	  break;
	}
      printf("%c", temp->n);
      temp = temp->next;
    }
  printf("\n");
}
