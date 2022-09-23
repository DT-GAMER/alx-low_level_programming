#include <stdio.h>

/**
 * main - prints 2 unique digits from between 00 and 99
 * i.e 01 is the same as 10 so don't put 10
 * Return: 0 always
 */
int main(void)
{
int first = 48;
int second;

while (first < 58)
{
second = 48;
while (second < 58)
{
if (first != second && first < second)
{
putchar(first);
putchar(second);
if (first == 56 && second == 57)
{
break;
}
putchar(',');
putchar(' ');
}
second++;
}
first++;
}
putchar('\n');
return (0);
}
