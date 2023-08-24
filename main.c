#include "monty.h"
build_t build = {NULL, NULL, NULL, 0};

/**
 * main - it interprete monty code
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success
 */
int main(int ac, char *av[])
{
  char *data;
  FILE *file;
  size_t size = 0;
  ssize_t read_line = 1;
  stack_t *stack = NULL;
  unsigned int count = 0;

  if (ac !=2)
    {
      fprintf(stderr, "USAGE: monty file\n");
      exit(EXIT_FAILURE);
    }
  file = fopen(av[1], "r");
  build.file = file;
  if (!file)
    {
      fprintf(stderr, "Error: Can't open file %s\n", av[1]);
      exit(EXIT_FAILURE);
    }
  while (read_line > 0)
    {
      data = NULL;
      read_line = getline(&data, &size, file);
      build.data = data;
      count++;
      if (read_line > 0)
	{
	  execute(data, &stack, count, file);
	}
      free(data);
    }
  free_stack(stack);
  fclose(file);

return (0);
}
