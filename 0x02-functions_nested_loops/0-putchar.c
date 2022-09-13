#include <stdio.h>
g#include "main.h"

/**
 * _putchar - entrypoint
 *
 * Description: Prints main with _putchar
 * @c: -
 * Return: Always 0
 */

int _putchar(char c)
{
int i = 0;
char c;
char s[] = "Main\n";

while (i <= 9)
{
c = s[i];
_putchar(c);
i++;
}
return (0);
}
