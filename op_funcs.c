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

  if (*stack == NULL)
  {
	return;
  }
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
	exit(EXIT_FAILURE);
  }
  printf("%d\n", temp->n);
  return;
}
void op_pop(stack_t **stack, unsigned int linecount)
{
      stack_t *temp;

      if (*stack == NULL)
      {
	    printf("L%u: can't pop an empty stack\n", linecount);
	    exit(EXIT_FAILURE);
      }
      temp = *stack;
      *stack = (*stack)->next;
      free(temp);
      return;
}
void op_swap(stack_t **stack, unsigned int linecount)
{
      stack_t *temp;
      int tempi;

      if (*stack == NULL)
      {
            printf("L%u: can't swap, stack too short\n", linecount);
            exit(EXIT_FAILURE);
      }
      temp = (*stack)->next;
      if (temp == NULL)
      {
            printf("L%u: can't swap, stack too short\n", linecount);
            exit(EXIT_FAILURE);
      }
      tempi = (*stack)->n;
      (*stack)->n = temp->n;
      temp->n = tempi;
      return;
}
void op_add(stack_t **stack, unsigned int linecount)
{
      stack_t *temp;

      if (*stack == NULL)
      {
            printf("L%u: can't add, stack too short\n", linecount);
            exit(EXIT_FAILURE);
      }
      temp = (*stack)->next;
      if (temp == NULL)
      {
            printf("L%u: can't add, stack too short\n", linecount);
            exit(EXIT_FAILURE);
      }
      temp->n = ((*stack)->n + temp->n);
      temp = (*stack);
      *stack = (*stack)->next;
      free(temp);
      return;
}
void op_nop(stack_t **stack, unsigned int linecount)
{
      (void)stack;
      (void)linecount;

      return;
}
void op_sub(stack_t **stack, unsigned int linecount)
{
      stack_t *temp;

      if (*stack == NULL)
      {
            printf("L%u: can't sub, stack too short\n", linecount);
            exit(EXIT_FAILURE);
      }
      temp = (*stack)->next;
      if (temp == NULL)
      {
            printf("L%u: can't sub, stack too short\n", linecount);
            exit(EXIT_FAILURE);
      }
      temp->n = (temp->n - (*stack)->n);
      temp = (*stack);
      *stack = (*stack)->next;
      free(temp);
      return;
}
void op_mul(stack_t **stack, unsigned int linecount)
{
      stack_t *temp;

      if (*stack == NULL)
      {
            printf("L%u: can't mul, stack too short\n", linecount);
            exit(EXIT_FAILURE);
      }
      temp = (*stack)->next;
      if (temp == NULL)
      {
            printf("L%u: can't mul, stack too short\n", linecount);
            exit(EXIT_FAILURE);
      }
      temp->n = ((*stack)->n * temp->n);
      temp = (*stack);
      *stack = (*stack)->next;
      free(temp);
      return;
}
void op_div(stack_t **stack, unsigned int linecount)
{
      stack_t *temp;

      if (*stack == NULL)
      {
            printf("L%u: can't div, stack too short\n", linecount);
            exit(EXIT_FAILURE);
      }
      if ((*stack)->n == 0)
      {
            printf("L%u: division by zero\n", linecount);
            exit(EXIT_FAILURE);
      }
      if ((*stack)->next == NULL)
      {
            printf("L%u: can't div, stack too short\n", linecount);
            exit(EXIT_FAILURE);
      }
      if ((*stack)->n == 0)
      {
            printf("L%u: division by zero\n", linecount);
            exit(EXIT_FAILURE);
      }
      temp = (*stack)->next;
      temp->n = (temp->n / (*stack)->n);
      temp = (*stack);
      *stack = (*stack)->next;
      free(temp);
      return;
}
void op_mod(stack_t **stack, unsigned int linecount)
{
      stack_t *temp;

      if (*stack == NULL)
      {
            printf("L%u: can't mod, stack too short\n", linecount);
            exit(EXIT_FAILURE);
      }
      if ((*stack)->n == 0)
      {
            printf("L%u: division by zero\n", linecount);
            exit(EXIT_FAILURE);
      }
      if ((*stack)->next == NULL)
      {
            printf("L%u: can't div, stack too short\n", linecount);
            exit(EXIT_FAILURE);
      }
      if ((*stack)->n == 0)
      {
            printf("L%u: division by zero\n", linecount);
            exit(EXIT_FAILURE);
      }
      temp = (*stack)->next;
      temp->n = (temp->n % (*stack)->n);
      temp = (*stack);
      *stack = (*stack)->next;
      free(temp);
      return;
}
