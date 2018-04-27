#include "monty.h"
#define DELIMS " \n\t\r\a"

char *open_file(char *filename)
{
  char *token, *token1;
  FILE *fd;
  char *line = NULL;
  int reads;
  size_t buffersize = 0;
  unsigned long int line_count = 0;
  char *psh = "push";

  if (filename == NULL)
    {
      return(0);
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
  return (line);
}
