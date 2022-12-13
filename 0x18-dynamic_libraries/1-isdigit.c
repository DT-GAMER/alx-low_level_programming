#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Entry point
 * @c: character value to be executed
 * Description - Write a function that checks for a digit(0 through 9)
 * Return: return 1 or 0
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
