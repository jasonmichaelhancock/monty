
#include "monty.h"
/**
 * remove_spaces - compare strings
 * @source: string 1
 *
 * Return: the spaceless string
 */
int remove_spaces(char *filename)
{
  FILE *fp, *fp2;
  int p;

  fp = fopen(filename,"r");
  if (fp == NULL)
    {
      printf("File does n't exist");
      return 0;
    }

  /* all the content gets copied to this filename and
     extra blank spaces are also removed from your file
  */
  fp2 = fopen("newfile.txt","w");


  while((p=getc(fp))!=EOF)
    {
      fputc(p,fp2);

      /* since the ascii code for a blank space is 32
       */
      if (p==32) 
        {
	  while((p=getc(fp))==32)
            {

            }
	  fputc(p,fp2);
        }
    }
  fclose(fp);
  fclose(fp2);
  return 1;
}

/**
 * _strcmp - compare strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: the difference..
 */
int _strcmp(char *s1, char *s2)
{
  int i = 0;
  int x;

  while (s1[i] != '\0' && s2[i] != '\0')
    {
      x = s1[i] - s2[i];
      if (x != 0)
	{
	  return (x);
	}
      i++;
    }
  return (x);
}
size_t print_dlistint(stack_t *h)
{
  size_t counter;

  counter = 0;
  while (h != NULL)
    {
      printf("%d\n", h->n);
      h = h->next;
      counter++;
    }
  return (counter);
}
