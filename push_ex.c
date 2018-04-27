#include "monty.h"
#include <stdbool.h>

/**
 * push_ex - add a node into the linked list
 * @stack: the head of the list
 * @token: the n value
 *
 * Return: Nothing.
 */
void push_ex(stack_t **stack, char *token)
{
  stack_t *new;
  int n;                                                                              

  n = atoi(token);
  new = malloc(sizeof(stack_t));
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
