#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct stack_s
{
  int n;
  struct stack_s *prev;
  struct stack_s *next;
} stack_t;

/*this link always point to first Link*/
stack_t *head = NULL;

/*this link always point to last Link */
stack_t *last = NULL;

stack_t *current = NULL;

/*is list empty*/
bool isEmpty() {
  return head == NULL;
}
/*display the list in from first to last*/
void displayForward() {

  /*start from the beginning*/
  stack_t *ptr = head;
  
  /*navigate till the end of the list*/
  printf("\n[ ");
  
  while(ptr != NULL) {        
    printf("(%d) ",ptr->n);
    ptr = ptr->next;
  }
  
  printf(" ]");
}

/*insert link at the first location*/
void insertFirst(int n) {

  /*create a link*/
  stack_t *link = (stack_t *) malloc(sizeof(stack_t));
  link->n = n;
 
  if(isEmpty()) {
    /*make it the last link*/
    last = link;
  } else {
    /*update first prev link*/
    head->prev = link;
  }

  /*point it to old first link*/
  link->next = head;
  
  /*point first to new first link*/
  head = link;
}
int main() {
  insertFirst(10);
  insertFirst(20);
  insertFirst(30);
  insertFirst(1);
  insertFirst(40);
  insertFirst(56); 

  printf("\nList (First to Last): ");  
  displayForward();
  return(0);
}
