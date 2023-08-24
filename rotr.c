#include "monty.h"

/**
 * m_rotr - it rotates stack
 * @top: pointer to the top element of stack
 * @count: line_number
 * Return: Nothing
 */

void m_rotr(stack_t **top,unsigned int count)
{
  stack_t *temp;
  (void)count;


  temp = *top;
  if (*top == NULL || (*top)->next == NULL)
    {
      return;
    }
  while (temp->next)
    {
      temp = temp->next;
    }
  temp->next = *top;
  temp->prev->next = NULL;
  temp->prev = NULL;
  (*top)->prev = temp;
  (*top) = temp;
}
