#include "main.h"
#include <stdio.h>
<<<<<<< HEAD
=======

>>>>>>> f3597c20ba4c22c83ada1faf8a6064634dac9255
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;
<<<<<<< HEAD
=======

>>>>>>> f3597c20ba4c22c83ada1faf8a6064634dac9255
    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
