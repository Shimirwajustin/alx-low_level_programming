#include <stdio.h>
#include "main.h"

/*betty style*/
/**
*print_line -  a function that draws a straight line
*@n: to be checked
*Return: void
*/
void print_line(int n)
{
int a = 0;

if (n < 0 || n == 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < n; a++)
{
_putchar('_');
}
_putchar('\n');
}
}
