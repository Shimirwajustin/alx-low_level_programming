#include "main.h"
/**
*_print_rev_recursion - void function
*@s: an array
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
