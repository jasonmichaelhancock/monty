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
}
/**
 * op_add - add func                                                                   *
 * @a: The operator                                                                    * @b: The other operator                                                              * 
 * Return: Nothing.
 */
void op_pint(stack_t **stack, unsigned int linecount)
{
  stack_t *temp = *stack;
  (void)linecount;

  printf("PINT:\n%d\n", temp->n);
  temp = temp->next;
}
/**                                                                                  
 * op_add - add func                                                                \
 *                                                                                 
 * @a: The operator                                                                 \
 * @b: The other operator                                                         \
 *                                                                               
 * Return: Nothing.                                                                  
 */
void op_error(stack_t **stack, unsigned int linecount)
{
  (void)stack;
  
  printf("L%u: unknown instruction", linecount);
  exit(EXIT_FAILURE);
}
