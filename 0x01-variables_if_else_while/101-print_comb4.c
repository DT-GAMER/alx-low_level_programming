#include <stdio.h>

/**
 * main - prints 2 unique digits from between 00 and 99
 * i.e 01 is the same as 10 so don't put 10
 * Return: 0 always
 */
int main(void)
{
int first = 48;
int second = 48;
int third = 48;

while (first < 58)
{
second = 48;
while (second < 58)
{
third = 48;
while (third < 58)
{
if (second != first && second != third && first != third &&
first < second && second < third)
{
putchar(first);
putchar(second);
putchar(third);
if (first == 55 && second == 56 && third == 57)
{
break;
}
putchar(',');
putchar(' ');
}
third++;
}
second++;
}
first++;
}
putchar('\n');
return (0);
}
