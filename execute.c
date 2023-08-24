#include "monty.h"

/**
 * execute - it execute the opcode
 * @stack: top of stack
 * @count: line_counter
 * @file: monty file pointer
 * @data: line data
 * Return: Nothing
 */
int execute(char *data, stack_t **stack, unsigned int count, FILE *file)
{
  instruction_t ops[] = {
			 {"push", m_push}, {"pall", m_pall}, {"pint", m_pint},
			 {"pop", m_pop},
			 {"swap", m_swap},
			 {"add", m_add},
			 {"nop", m_nop},
			 {"sub", m_sub},
			 {"div", m_div},
			 {"mul", m_mul},
			 {"mod", m_mod},
			 {"pchar", m_pchar},
			 {"rotl", m_rotl},
			 {"rotr", m_rotr},
			 {"queue", m_queue},
			 {"stack", m_stack},
			 {NULL, NULL}
  };
  unsigned int i = 0;
  char *opt;

  opt = strtok(data, " \n\t");
  if (opt && opt[0] == '#')
    return (0);
  build.ag = strtok(NULL, " \n\t");
  while (ops[i].opcode && opt)
    {
      if (strcmp(opt, ops[i].opcode) == 0)
	{
	  ops[i].f(stack, count);
	  return (0);
	}
      i++;
    }
  if (opt && ops[i].opcode == NULL)
    {
      fprintf(stderr, "L%d: unknown instruction %s\n", count, opt);
      fclose(file);
      free(data);
      free_stack(*stack);
      exit(EXIT_FAILURE);
    }
  return (1);
}
