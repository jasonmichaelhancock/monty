#include "monty.h"
/**
 * op_pall - print the stack
 *
 * @atack: The stack
 * @linecount: sent at linecount
 *
 * Return: Nothing.
 */
void op_pall(stack_t **stack, unsigned int linecount)
{
  stack_t *temp = *stack;
  (void)linecount;

  while (temp != NULL)
    {
      printf("%d\n", temp->n);
      temp = temp->next;
    }
  return;
}
/**
 * op_pint - print first node
 * @stack: The linked list
 * @linecount: the current line
 *
 * Return: Nothing.
 */
void op_pint(stack_t **stack, unsigned int linecount)
{
  stack_t *temp = *stack;

  if (*stack == NULL)
  {
	printf("L%u: can't pint, stack empty", linecount);
  }
  printf("%d\n", temp->n);
  return;
}
/*
void error(*s, unsigned int line_count)
{
  printf("L%u: unknown instruction %s", line_count, s);       
  exit(EXIT_FAILURE);                                             
}
*/
