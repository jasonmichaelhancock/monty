#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * main - doubly linked list representation of a stack (or queue)
 * @argc: integer
 * @argv: points to the previous element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 */
int main(int argc, char **argv)
{
  if (argc != 2)
    {
    printf("USAGE: monty file\n");
    exit(EXIT_FAILURE);
    }
  
