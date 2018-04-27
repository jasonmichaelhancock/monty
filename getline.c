#include "monty.h"
#define DELIMS " \n\t\r\a"

void open_file(char *filename)
{
  stack_t *temp;
  char *token, *token1;
  FILE *fd;
  char *line = NULL;
  int reads;
  size_t buffersize = 0;
  unsigned long int line_count = 0;
  char *psh = "push";

  if (filename == NULL)
    {
      return;
    }
  fd = fopen(filename, "r");
  if (fd == NULL)
    {
      printf("Error: Can't open file %s", filename);
      exit(EXIT_FAILURE);
    }

  while ((reads = getline(&line, &buffersize, fd)) != -1)
    {
      if (*line == '\n')
	{
	  line_count++;
	  continue;
	}
      line_count++;
      token = strtok(line, DELIMS);
      if (token == NULL)
	{
	  continue;
	}
      token1 = strtok(NULL,DELIMS);
      if ((strcmp(token, psh)) != 0)
	{
	  (*get_op_func(token))(&stack, line_count);
	}
      else
	{
	  if (token != NULL)
	    {
	      push_ex(&stack, token1);
	    }
	}
    }
  fclose(fd);
  free(line);
  if (stack == NULL)
    return;
  while (stack != NULL)
    {
      temp = (stack)->next;
      free (stack);
      if (temp == NULL)
	return;
      temp->prev = NULL;
      stack = temp;
    }
  free(stack);
  return;
}
