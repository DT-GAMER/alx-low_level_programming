#include <stdio.h>
#include "lists.h"

/**
   listint_len - Count the elements in a linked list
   @h: The head of the linked list

    Return: The number of elements in a linked list
*/

size_t listint_len(const listint_len *h)
{
  int count = 0;

  if (h != NULL)
    {
      while (h)
	{
	  h = h->next;
	  count++;
	}
    }
  return(count);
}
