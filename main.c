#include "monty.h"
#define DELIMS " \t\r\n\a"
int main(int argc, char **argv)
{ 
  if (argc != 2)
    {
      printf("USAGE: monty file\n");
      exit(EXIT_FAILURE);
    }
  open_file(argv[1]);
  return(0);
}
