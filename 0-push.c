#include "monty.h"
/** 
 * f_push - it adds node to stack
 * @head: pointer to top node
 * @count: it counts line_number
 * Return: no return
 */
void f_push(stack_t *head, unsigned int count)
{
  int num, i = 0, flag = 0;

  if (build.ag)
    {
      if (build.ag[0] == '-')
	i++;
      for (;build.ag[i] != '\0'; i++)
	{
	  if (build.ag[i] > 57 || build.ag[i] < 48)
	    flag = 1;
	}
      if (flG == 1)
	{
	  fprintf(stderr, "L%d: usage: push integer\n", count);
	  fclose(build.file);
	  free(build.data);
	  free_stack(*head);
	  exit(EXIT_FAILURE);
	}
    }
  else
    {
      fprintf(stderr, "L%d: usage: push integer\n", count);
          fclose(build.file);
          free(build.data);
          free_stack(*head);
          exit(EXIT_FAILURE);
    }
      n = atoi(build.ag);

      if (build.l == 0)
	addnode(head, n);
      else
	addqueue(head, n);
}    
