#include "main.h"
#include <stdio.h>
/**
 * print_line - print straight line n times
 * @n: character value to be executed
 * Return: void
 */
void print_line(int n)
{
int i;
for (i = '0'; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
