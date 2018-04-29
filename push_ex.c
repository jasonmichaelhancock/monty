#include "monty.h"
#include <stdbool.h>

/**
 * push_ex - add a node into the linked list
 * @stack: the head of the list
 * @token: the n value
 *
 * Return: Nothing.
 */
void push_ex(stack_t **stack, char *token, unsigned int line_number)
{
  stack_t *new;
  int n;
  int i;

  for (i = 0; token[i] != '\0'; i ++)
  {
	if (token[i] >= '0' && token[i]  <= '9')
	      continue;
	else
	{
	      printf("L%u: usage: push integer\n", line_number);
              exit(EXIT_FAILURE);
	}
  }
  n = atoi(token);
  new = malloc(sizeof(stack_t));
  if (new == NULL)
  {
	printf("Error: malloc failed\n");
	exit(EXIT_FAILURE);
  }
  new->n = n;
  new->prev = NULL;
  if (*stack == NULL)
    {
      new->next = NULL;
      *stack = new;
      return;
    }
  new->next = *stack;
  (*stack)->prev = new;
  *stack = new;
  return;
}
