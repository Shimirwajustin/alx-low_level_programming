#include "main.h"
/**
*_puts_recursion- a void function
*@s: array
*Return: no return in void function
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
