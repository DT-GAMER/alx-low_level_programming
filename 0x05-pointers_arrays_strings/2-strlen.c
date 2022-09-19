#include "main.h"
#include <stdio.h>

/**
 * _strlen - A function that prints the length of a string
 * @s: String to find length
 * Return: length of string
 */

int _strlen(char *s)
{
int i = 0;

while (*(s + i))
i++;
return (i);
}
