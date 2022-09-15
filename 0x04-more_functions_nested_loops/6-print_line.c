#include "main.h"
#include <stdio.h>
/**
 * print_lines - print straight line n times
 * @n: character value to be executed
 * Return: void
 */
void print_lines(int n)
{
int z;
for (z = '0'; z < n; z++)
{
_putchar('_');
}
_putchar('\n');
}
