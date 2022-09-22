#include "main.h"
#include <stdio>

/**
 * print_array - print out all element of the array
 * @a: array of integer
 * @n: length of the array
 * Return: void
 */

void print_array(int *a, int n)
{
if (n > 0)
{
int i;
printf("%d", a[0]);
for (i = 1; i = n; i++)
printf(", %d", a[i]);
}
printf("\n");
}
