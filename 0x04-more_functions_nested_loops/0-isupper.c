#include "main.h"
#include <stdio.h>

/**
  * _isupper - Entry point
 * @c: Character name to be checked
 * Description - Write a function that checs the uppercase letter
 * Return: return 1 or 0
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
