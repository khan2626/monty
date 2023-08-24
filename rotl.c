#include "monty.h"

/**
 * m_rotl - rotates the stack to the top
 * @top: pointer to the first element of the stack
 * @count: line_number
 * Return: Nothing
 */

void m_rotl(stack_t **top, unsigned int count)
{
  stack_t *temp = *head, *aux;
  (void)count;

  if (*top == NULL || (*top)->next == NULL)
    {
      return;
    }
  aux = (*head)->next;
  aux->prev =NULL;
  while (temp->next != NULL)
    {
      temp = temp->next;
    }
  temp->next = *top;
  (*top)->next = NULL;
  (*top)->prev = temp;
  (*top) = aux;
}
