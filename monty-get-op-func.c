#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
/**
 * get_op_func - get the functions
 *
 * @s: the operator
 *
 * Return: pointer to a function
 */
void (*get_op_func(char *s, unsigned int line_number))(stack_t **, unsigned int)
{
  int i = 0;
  instruction_t ops[] = {
    {"pall", op_pall},
    {"pint", op_pint},
    /*
      {"pop", op_pop},
    {"swap", op_swap}
    {"add", op_add},
    {"nop", op_nop},
    {"sub", op_sub},
    {"div", op_div},
    {"mul", op_mul},
    {"mod", op_mod},
    {"pchar", op_pchar},
    {"pstr", op_pstr},
    {"rotl", op_rotl},
    {"rotr", op_rotr},
    {"stack", op_stack},
    {"queue", op_queue},
    */
    {NULL, NULL}
  };
  while (ops[i].opcode != NULL)
    {
      if (strcmp(ops[i].opcode, s) == 0)
	{
	  return (ops[i].f);
	}
      i++;
    }
  printf("L%u: unknown instruction %s\n", line_number, s);
  exit(EXIT_FAILURE);
  return(NULL);
}
