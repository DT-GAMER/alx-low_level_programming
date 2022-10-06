<<<<<<< HEAD
#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory
 * @b: the size to allocate
 *
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);

if (p == NULL)
exit(98);

return (p);
}
=======
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - Allocates memory
  * @b: the size to allocate
  *
  * Return: Nothing.
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
>>>>>>> 55e9c31aab15be74c258ece9090f6a2e4f274ddb
