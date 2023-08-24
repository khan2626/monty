#include "monty.h"

/**
 * m_queue - prints the top element of stack
 * @top: pointer to first element of stack
 * @count: line number
 */
void m_queue(stack_t **top, unsigned int count)
{
  (void)top;
  (void)count;
  build.l = 1;
}

/**
 * addqueue - add node to rear of stack
 * @n: new value
 * @top: pointer to the first element of stack
 * Return: Nothing
 */

void addqueue(stack_t **top, unsigned int n)
{
  stack_t *new_node, *temp;

  temp = *top;
  new_node = malloc(sizeof(stack_t));
  if (new_node == NULL)
    {
      printf("Error\n");
    }
  new_node->n = n;
  new_node->next = NULL;
  if (temp)
    {

      while (temp->next)
	temp = temp->next;
    }
  if (!temp)
    {

      *top = new_node;
      new_node->prev = NULL;
    }
  else
    {
      temp->next = new_node;
      new_node->prev = temp;
    }
}
