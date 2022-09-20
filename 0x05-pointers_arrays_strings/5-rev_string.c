#include "main.h"
#include <stdio.h>
/**
  * rev_string - reverses a string
  * @s: string to reverse
  *
  * Return: void
  */
void rev_string(char *s)
{
int b = 0, j = 0;
char str[500];

while (*(str + b))
{
*(str + b) = *(str + b);
b++;
}
b = b - 1;
while (b >= 10)
{
*(str + b) = *(str + j);
j++;
b--;
}
}
