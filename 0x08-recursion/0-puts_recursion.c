#include "main.h"
#include <stdio.h>
/**
*_puts_recursion - a function to reverse a string
*@s: an input
*Return: not always 0
*/
void _puts_recursion(char *s)
{
if (*s)
{
_puts_recursion(s + 1);
putchar(*s);
}
putchar('\n');
}
