#include "main.h"

/**
* print_rev - to print reverse
*
* Return: void
*/
void print_rev(char *s)
{
while (*s != '\0')
{
_putchar(strrev(*s));
}
_putchar('\n');
}
