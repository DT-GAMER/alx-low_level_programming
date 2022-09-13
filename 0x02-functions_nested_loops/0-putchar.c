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
char name_of_school[] = "ALX";

while (i < 9)
{
_putchar(name_of_school[i]);
i++;
}
_putchar('\n');
return (0);
}
