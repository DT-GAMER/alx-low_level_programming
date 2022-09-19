#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the value of int a and int b
 *
 * @a: first integer
 * @b: second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
