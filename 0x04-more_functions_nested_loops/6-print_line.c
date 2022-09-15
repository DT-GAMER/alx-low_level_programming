#include "main.h"
#include <stdio.h>
/**
 * print_line - print straight line n times
 * @n: character value to be executed
 * Return: void
 */

void print_line(int n)
{
int co;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (co = 1; co <= n; co++)
{
_putchar('_');
}
_putchar('\n');
}
}
