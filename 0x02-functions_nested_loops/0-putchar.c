#include <stdio.h>
#include "main.h"

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
char s[] = "_putchar\n";

while (i <= 9)
{
c = s[i];
_putchar(c);
i++;
}
return (0);
}
