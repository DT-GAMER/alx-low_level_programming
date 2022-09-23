#include <stdio.h>

/**
 * main - prints out all single base 10 numbers using
 * putchar and without declaring a type char
 * Return: 0 after successful completion
 */
int main(void)
{
int a;

for (a = 48; a <= 57; a++)
{
putchar(a);
if (a < 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
