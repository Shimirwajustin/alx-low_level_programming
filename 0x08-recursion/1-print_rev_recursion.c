#include "main.h"
#include <string.h>
/**
*_print_rev_recursion - a function
*@s: input
*Return: not always 0
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
reverse(s);
_putchar(*s);
}
}
